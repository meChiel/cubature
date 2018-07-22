// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/cubature.h"
#include <Rcpp.h>

using namespace Rcpp;

// doCuhre
Rcpp::List doCuhre(int nComp, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int nVec, int minEval, int maxEval, double absTol, double relTol, int key, int flag);
RcppExport SEXP _cubature_doCuhre(SEXP nCompSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP nVecSEXP, SEXP minEvalSEXP, SEXP maxEvalSEXP, SEXP absTolSEXP, SEXP relTolSEXP, SEXP keySEXP, SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nComp(nCompSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type nVec(nVecSEXP);
    Rcpp::traits::input_parameter< int >::type minEval(minEvalSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absTol(absTolSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< int >::type key(keySEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    rcpp_result_gen = Rcpp::wrap(doCuhre(nComp, f, xLL, xUL, nVec, minEval, maxEval, absTol, relTol, key, flag));
    return rcpp_result_gen;
END_RCPP
}
// doVegas
Rcpp::List doVegas(int nComp, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int nVec, int minEval, int maxEval, double absTol, double relTol, int nStart, int nIncrease, int nBatch, int gridNo, SEXP stateFile, int seed, int flag, int cuba_args);
RcppExport SEXP _cubature_doVegas(SEXP nCompSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP nVecSEXP, SEXP minEvalSEXP, SEXP maxEvalSEXP, SEXP absTolSEXP, SEXP relTolSEXP, SEXP nStartSEXP, SEXP nIncreaseSEXP, SEXP nBatchSEXP, SEXP gridNoSEXP, SEXP stateFileSEXP, SEXP seedSEXP, SEXP flagSEXP, SEXP cuba_argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nComp(nCompSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type nVec(nVecSEXP);
    Rcpp::traits::input_parameter< int >::type minEval(minEvalSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absTol(absTolSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< int >::type nStart(nStartSEXP);
    Rcpp::traits::input_parameter< int >::type nIncrease(nIncreaseSEXP);
    Rcpp::traits::input_parameter< int >::type nBatch(nBatchSEXP);
    Rcpp::traits::input_parameter< int >::type gridNo(gridNoSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stateFile(stateFileSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    Rcpp::traits::input_parameter< int >::type cuba_args(cuba_argsSEXP);
    rcpp_result_gen = Rcpp::wrap(doVegas(nComp, f, xLL, xUL, nVec, minEval, maxEval, absTol, relTol, nStart, nIncrease, nBatch, gridNo, stateFile, seed, flag, cuba_args));
    return rcpp_result_gen;
END_RCPP
}
// doSuave
Rcpp::List doSuave(int nComp, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int nVec, int minEval, int maxEval, double absTol, double relTol, int nNew, int nMin, double flatness, SEXP stateFile, int seed, int flag, int cuba_args);
RcppExport SEXP _cubature_doSuave(SEXP nCompSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP nVecSEXP, SEXP minEvalSEXP, SEXP maxEvalSEXP, SEXP absTolSEXP, SEXP relTolSEXP, SEXP nNewSEXP, SEXP nMinSEXP, SEXP flatnessSEXP, SEXP stateFileSEXP, SEXP seedSEXP, SEXP flagSEXP, SEXP cuba_argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nComp(nCompSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type nVec(nVecSEXP);
    Rcpp::traits::input_parameter< int >::type minEval(minEvalSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absTol(absTolSEXP);
    Rcpp::traits::input_parameter< double >::type relTol(relTolSEXP);
    Rcpp::traits::input_parameter< int >::type nNew(nNewSEXP);
    Rcpp::traits::input_parameter< int >::type nMin(nMinSEXP);
    Rcpp::traits::input_parameter< double >::type flatness(flatnessSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stateFile(stateFileSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    Rcpp::traits::input_parameter< int >::type cuba_args(cuba_argsSEXP);
    rcpp_result_gen = Rcpp::wrap(doSuave(nComp, f, xLL, xUL, nVec, minEval, maxEval, absTol, relTol, nNew, nMin, flatness, stateFile, seed, flag, cuba_args));
    return rcpp_result_gen;
END_RCPP
}
// doHCubature
Rcpp::List doHCubature(int fDim, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int maxEval, double absErr, double tol, int vectorInterface, unsigned norm);
RcppExport SEXP _cubature_doHCubature(SEXP fDimSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP maxEvalSEXP, SEXP absErrSEXP, SEXP tolSEXP, SEXP vectorInterfaceSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type fDim(fDimSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absErr(absErrSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type vectorInterface(vectorInterfaceSEXP);
    Rcpp::traits::input_parameter< unsigned >::type norm(normSEXP);
    rcpp_result_gen = Rcpp::wrap(doHCubature(fDim, f, xLL, xUL, maxEval, absErr, tol, vectorInterface, norm));
    return rcpp_result_gen;
END_RCPP
}
// doPCubature
Rcpp::List doPCubature(int fDim, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int maxEval, double absErr, double tol, int vectorInterface, unsigned norm);
RcppExport SEXP _cubature_doPCubature(SEXP fDimSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP maxEvalSEXP, SEXP absErrSEXP, SEXP tolSEXP, SEXP vectorInterfaceSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type fDim(fDimSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absErr(absErrSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type vectorInterface(vectorInterfaceSEXP);
    Rcpp::traits::input_parameter< unsigned >::type norm(normSEXP);
    rcpp_result_gen = Rcpp::wrap(doPCubature(fDim, f, xLL, xUL, maxEval, absErr, tol, vectorInterface, norm));
    return rcpp_result_gen;
END_RCPP
}
