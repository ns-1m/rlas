// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fast_table
IntegerVector fast_table(IntegerVector x, int size);
RcppExport SEXP _rlas_fast_table(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_table(x, size));
    return rcpp_result_gen;
END_RCPP
}
// fast_countequal
int fast_countequal(IntegerVector x, int t);
RcppExport SEXP _rlas_fast_countequal(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countequal(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countbelow
int fast_countbelow(NumericVector x, double t);
RcppExport SEXP _rlas_fast_countbelow(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countbelow(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countover
int fast_countover(NumericVector x, double t);
RcppExport SEXP _rlas_fast_countover(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countover(x, t));
    return rcpp_result_gen;
END_RCPP
}
// C_reader
List C_reader(CharacterVector ifiles, CharacterVector ofile, CharacterVector select, CharacterVector filter, std::string filter_wkt);
RcppExport SEXP _rlas_C_reader(SEXP ifilesSEXP, SEXP ofileSEXP, SEXP selectSEXP, SEXP filterSEXP, SEXP filter_wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ifiles(ifilesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type ofile(ofileSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type select(selectSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter_wkt(filter_wktSEXP);
    rcpp_result_gen = Rcpp::wrap(C_reader(ifiles, ofile, select, filter, filter_wkt));
    return rcpp_result_gen;
END_RCPP
}
// lasheaderreader
List lasheaderreader(CharacterVector file);
RcppExport SEXP _rlas_lasheaderreader(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(lasheaderreader(file));
    return rcpp_result_gen;
END_RCPP
}
// lasfilterusage
void lasfilterusage();
RcppExport SEXP _rlas_lasfilterusage() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    lasfilterusage();
    return R_NilValue;
END_RCPP
}
// C_writer
void C_writer(CharacterVector file, List LASheader, DataFrame data);
RcppExport SEXP _rlas_C_writer(SEXP fileSEXP, SEXP LASheaderSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< List >::type LASheader(LASheaderSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    C_writer(file, LASheader, data);
    return R_NilValue;
END_RCPP
}
// laxwriter
void laxwriter(CharacterVector file);
RcppExport SEXP _rlas_laxwriter(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type file(fileSEXP);
    laxwriter(file);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rlas_fast_table", (DL_FUNC) &_rlas_fast_table, 2},
    {"_rlas_fast_countequal", (DL_FUNC) &_rlas_fast_countequal, 2},
    {"_rlas_fast_countbelow", (DL_FUNC) &_rlas_fast_countbelow, 2},
    {"_rlas_fast_countover", (DL_FUNC) &_rlas_fast_countover, 2},
    {"_rlas_C_reader", (DL_FUNC) &_rlas_C_reader, 5},
    {"_rlas_lasheaderreader", (DL_FUNC) &_rlas_lasheaderreader, 1},
    {"_rlas_lasfilterusage", (DL_FUNC) &_rlas_lasfilterusage, 0},
    {"_rlas_C_writer", (DL_FUNC) &_rlas_C_writer, 3},
    {"_rlas_laxwriter", (DL_FUNC) &_rlas_laxwriter, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rlas(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
