// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fillVector
SEXP fillVector(SEXP x, bool rev);
RcppExport SEXP tidyr_fillVector(SEXP xSEXP, SEXP revSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type rev(revSEXP);
    __result = Rcpp::wrap(fillVector(x, rev));
    return __result;
END_RCPP
}
