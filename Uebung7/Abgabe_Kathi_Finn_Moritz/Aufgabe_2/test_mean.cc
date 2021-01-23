#include <iostream>

#include "statistics.hh"

int main(int argc, char** argv) {
  std::vector<double> empty;
  double mean_empty = 0;
  if (std::abs(mean(empty) - mean_empty) > 1e-10) return 1;

  std::vector<double> vec_1 = {{4.2, 3.6, -1.2, 6.3}};
  double mean_1 = 3.225;
  if (std::abs(mean(vec_1) - mean_1) > 1e-10) return 1;

  std::vector<double> vec_2 = {{1, 100.1, -34.3, 12.2, 0}};
  double mean_2 = 15.8;
  if (std::abs(mean(vec_2) - mean_2) > 1e-10) return 1;

  return 0;
}
