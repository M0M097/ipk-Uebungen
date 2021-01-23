#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <algorithm>
#include <vector>
#include <cmath>

// Return the mean
template<typename mylist>
double mean(mylist v) {
  double sum = 0;
  for (auto e : v) sum += e;

  return sum / v.size();
}

// Return the median
template<typename mylist>
double median(mylist l) {
  std::vector<double> v;
  for (int i; i < l.size(); i++){
	  v.push_back(l[i]);
  }

  if (v.size() == 0) return 0;

  auto v2(v);
  std::sort(v2.begin(), v2.end());

  if (v.size() % 2 == 0) {
    return 0.5 * (v2[v.size() / 2 - 1] + v2[v.size() / 2]);
  } else {
    return v2[(v.size() + 1) / 2 - 1];
  }
}

// Return the k'th moment
template<typename mylist>
double moment(mylist v, int k) {
  double sum = 0;
  for (auto e : v) sum += std::pow(e, k);

  return sum / v.size();
}

// Return the standard deviation
template<typename mylist>
double std_dev(mylist v) {
  double m = mean(v);
  double sum = 0;
  for (auto e : v) sum += (m - e) * (m - e);

  return std::sqrt(sum / v.size());
}

// Return a variety of statistics
template<typename mylist>
void statistics(mylist v) {
  std::cout << "mean: " << mean(v) << std::endl;
  std::cout << "median: " << median(v) << std::endl;
  std::cout << "second moment: " << moment(v, 2) << std::endl;
  std::cout << "std_dev: " << std_dev(v) << std::endl;
}

// make median robust  
template<typename mylist>
double robust_median(mylist l) {
  std::vector<typename mylist::value_type> v;
  for (auto e : l){
	  v.push_back(e);
  }

  if (v.size() == 0) return 0;

  auto v2(v);
  std::sort(v2.begin(), v2.end());

  if (v.size() % 2 == 0) {
    return 0.5 * (v2[v.size() / 2 - 1] + v2[v.size() / 2]);
  } else {
    return v2[(v.size() + 1) / 2 - 1];
  }
}
#endif  // STATISTICS_HH
