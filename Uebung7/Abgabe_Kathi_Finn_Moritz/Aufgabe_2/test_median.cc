#include <iostream>

#include "statistics.hh"

int main(int argc, char** argv) {
  std::vector<double> empty;
  double median_empty = 0;
  if (std::abs(median(empty) - median_empty) > 1e-10) return 1;

  std::vector<double> vec_1 = {{4.2, 3.6, -1.2, 6.3}};
  double median_1 = 3.9;
  if (std::abs(median(vec_1) - median_1) > 1e-10) return 1;

  std::vector<double> vec_2 = {{1, 100.1, -34.3, 12.2, 0}};
  double median_2 = 1;
  if (std::abs(median(vec_2) - median_2) > 1e-10) return 1;

  return 0;
}
