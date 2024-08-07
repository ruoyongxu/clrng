// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_gpuFisher_test
SEXP cpp_gpuFisher_test(Rcpp::S4 xR, Rcpp::S4 resultsR, int B, Rcpp::S4 streamsR, Rcpp::IntegerVector max_global_size, Rcpp::IntegerVector max_local_size);
RcppExport SEXP _clrng_cpp_gpuFisher_test(SEXP xRSEXP, SEXP resultsRSEXP, SEXP BSEXP, SEXP streamsRSEXP, SEXP max_global_sizeSEXP, SEXP max_local_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xR(xRSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type resultsR(resultsRSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type streamsR(streamsRSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type max_global_size(max_global_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type max_local_size(max_local_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_gpuFisher_test(xR, resultsR, B, streamsR, max_global_size, max_local_size));
    return rcpp_result_gen;
END_RCPP
}
// gpuRnBackend
SEXP gpuRnBackend(Rcpp::S4 x, Rcpp::S4 streams, IntegerVector max_global_size, std::string random_type, IntegerVector verbose);
RcppExport SEXP _clrng_gpuRnBackend(SEXP xSEXP, SEXP streamsSEXP, SEXP max_global_sizeSEXP, SEXP random_typeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type streams(streamsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type max_global_size(max_global_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type random_type(random_typeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gpuRnBackend(x, streams, max_global_size, random_type, verbose));
    return rcpp_result_gen;
END_RCPP
}
// logfactsumBackend
SEXP logfactsumBackend(Rcpp::S4 xR, Rcpp::IntegerVector numWorkItems);
RcppExport SEXP _clrng_logfactsumBackend(SEXP xRSEXP, SEXP numWorkItemsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xR(xRSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type numWorkItems(numWorkItemsSEXP);
    rcpp_result_gen = Rcpp::wrap(logfactsumBackend(xR, numWorkItems));
    return rcpp_result_gen;
END_RCPP
}
// cpp_gpu_qqnorm
SEXP cpp_gpu_qqnorm(Rcpp::S4 outR, double mu, double sigma, int lowertail, Rcpp::IntegerVector max_global_size, Rcpp::IntegerVector max_local_size);
RcppExport SEXP _clrng_cpp_gpu_qqnorm(SEXP outRSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP lowertailSEXP, SEXP max_global_sizeSEXP, SEXP max_local_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type outR(outRSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type lowertail(lowertailSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type max_global_size(max_global_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type max_local_size(max_local_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_gpu_qqnorm(outR, mu, sigma, lowertail, max_global_size, max_local_size));
    return rcpp_result_gen;
END_RCPP
}
// CreateStreamsBackend
SEXP CreateStreamsBackend(Rcpp::IntegerVector creatorInitialGlobalR, Rcpp::S4 streamsR, Rcpp::IntegerMatrix streamsMat, const int onGpu, const int keepInitial);
RcppExport SEXP _clrng_CreateStreamsBackend(SEXP creatorInitialGlobalRSEXP, SEXP streamsRSEXP, SEXP streamsMatSEXP, SEXP onGpuSEXP, SEXP keepInitialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type creatorInitialGlobalR(creatorInitialGlobalRSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type streamsR(streamsRSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type streamsMat(streamsMatSEXP);
    Rcpp::traits::input_parameter< const int >::type onGpu(onGpuSEXP);
    Rcpp::traits::input_parameter< const int >::type keepInitial(keepInitialSEXP);
    rcpp_result_gen = Rcpp::wrap(CreateStreamsBackend(creatorInitialGlobalR, streamsR, streamsMat, onGpu, keepInitial));
    return rcpp_result_gen;
END_RCPP
}
// getSystemInfo
Rcpp::List getSystemInfo();
RcppExport SEXP _clrng_getSystemInfo() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getSystemInfo());
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _getSystemInfo(void);

static const R_CallMethodDef CallEntries[] = {
    {"_clrng_cpp_gpuFisher_test", (DL_FUNC) &_clrng_cpp_gpuFisher_test, 6},
    {"_clrng_gpuRnBackend", (DL_FUNC) &_clrng_gpuRnBackend, 5},
    {"_clrng_logfactsumBackend", (DL_FUNC) &_clrng_logfactsumBackend, 2},
    {"_clrng_cpp_gpu_qqnorm", (DL_FUNC) &_clrng_cpp_gpu_qqnorm, 6},
    {"_clrng_CreateStreamsBackend", (DL_FUNC) &_clrng_CreateStreamsBackend, 5},
    {"_clrng_getSystemInfo", (DL_FUNC) &_clrng_getSystemInfo, 0},
    {"_getSystemInfo", (DL_FUNC) &_getSystemInfo, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_clrng(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
