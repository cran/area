// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// area0.cpp
doubles area_cpp(doubles x, doubles y);
extern "C" SEXP _area_area_cpp(SEXP x, SEXP y) {
  BEGIN_CPP11
    return cpp11::as_sexp(area_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(x), cpp11::as_cpp<cpp11::decay_t<doubles>>(y)));
  END_CPP11
}
// area0.cpp
doubles area_triangle_cpp(doubles x, doubles y);
extern "C" SEXP _area_area_triangle_cpp(SEXP x, SEXP y) {
  BEGIN_CPP11
    return cpp11::as_sexp(area_triangle_cpp(cpp11::as_cpp<cpp11::decay_t<doubles>>(x), cpp11::as_cpp<cpp11::decay_t<doubles>>(y)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_area_area_cpp",          (DL_FUNC) &_area_area_cpp,          2},
    {"_area_area_triangle_cpp", (DL_FUNC) &_area_area_triangle_cpp, 2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_area(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}