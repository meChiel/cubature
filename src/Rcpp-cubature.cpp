// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
// Copyright (C) 2016 Balasubramanian Narasimhan
//
// We need both R and C/C++ interfaces!

#include <Rcpp.h>      // need to include the main Rcpp header file only

#include "cubature.h"

SEXP fun;                   /* The function itself */
int count;                  /* Count of function evaluations */

int fWrapper(unsigned ndim, const double *x, void *fdata, unsigned fdim, double *fval) {
    //     Rcpp::Rcout<<"In Wrapper" <<std::endl;

    Rcpp::NumericVector xVal(ndim);   /* The x argument for the R function f */
    double* xp = xVal.begin();        /* The ptr to x (real) vector */
    for (int i = 0; i < ndim; ++i) {
        xp[i] = x[i];
    }

    // Rcpp::Rcout<<"before call" <<std::endl;

    Rcpp::NumericVector fx = Rcpp::Function(fun)(xVal);

    // Rcpp::Rcout<<"after call" <<std::endl;

    double* fxp = fx.begin();         /* The ptr to f(x) (real) vector */
    for (int i = 0; i < fdim; ++i) {
        fval[i] = fxp[i];
    }
    count++;
    return 0;
}

int fWrapper_v(unsigned ndim, unsigned long npts, const double *x, void *fdata,
               unsigned fdim, double *fval) {
    //     Rcpp::Rcout<<"In Wrapper" <<std::endl;

    Rcpp::NumericMatrix xVal(ndim, npts);   /* The x argument for the R function f */
    double* xp = xVal.begin();        /* The ptr to x (real) matrix */
    for (int i = 0; i < ndim * npts; ++i) {
        xp[i] = x[i];
    }

    //    Rcpp::Rcout<<"before call" <<std::endl;

    Rcpp::NumericMatrix fx = Rcpp::Function(fun)(xVal);

    //    Rcpp::Rcout<<"after call" <<std::endl;

    double* fxp = fx.begin();         /* The ptr to f(x) (real) matrix */
    for (int i = 0; i < fdim * npts; ++i) {
        fval[i] = fxp[i];
    }
    count++;
    return 0;
}

// [[Rcpp::export]]
Rcpp::List doCubature(int fDim, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL,
		      int maxEval, double absErr, double tol, int vectorInterface, unsigned norm) {

    count = 0; /* Zero count */
    fun = f;

    Rcpp::NumericVector integral(fDim);
    Rcpp::NumericVector errVals(fDim);
    int retCode;

    // Rcpp::Rcout<<"Call Integrator" <<std::endl;
    if (vectorInterface) {
        retCode = hcubature_v(fDim, fWrapper_v, NULL,
                              xLL.size(), xLL.begin(), xUL.begin(),
                              maxEval, absErr, tol, (error_norm) norm,
                              integral.begin(), errVals.begin());
    } else {
        retCode = hcubature(fDim, fWrapper, NULL,
                            xLL.size(), xLL.begin(), xUL.begin(),
                            maxEval, absErr, tol, (error_norm) norm,
                            integral.begin(), errVals.begin());
    }
    return Rcpp::List::create(
                              Rcpp::_["integral"] = integral,
                              Rcpp::_["error"] = errVals,
                              Rcpp::_["functionEvaluations"] = count,
                              Rcpp::_["returnCode"] = retCode);
}

