#include <Rcpp.h>
using namespace Rcpp;

//' @title Leading NA
//' @name rcpp_hello
//' @param x An integer vector
//' @export


// [[Rcpp::export]]
List rcpp_hello() {
  CharacterVector x = CharacterVector::create("foo", "bar");
  NumericVector y   = NumericVector::create(0.0, 1.0);
  List z            = List::create(x, y);
  return z;
}
