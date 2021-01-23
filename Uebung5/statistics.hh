# ifndef STATISTICS_HH
# define STATISTICS_HH

# include <vector>
// Mittelwert aller Einträge eines Vektors
double mean(const std::vector<double>& v);
// Median aller Einträge eines Vektors
double median(const std::vector<double>& v);
// k-te statistische Moment
double moment(const std::vector<double>& v, int k);
// Standardabweichung eines Vektors 
double standard_deviation(const std::vector<double>& v);

# endif
