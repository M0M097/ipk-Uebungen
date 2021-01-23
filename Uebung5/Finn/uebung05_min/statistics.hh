#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>

//function double mean, gibt Mittelwert E[v] aller Einträge des Vektor v zurück
double mean(const std::vector<double>& v);

//function median, gibt Median aller M(v) aller Einträge des Vektor v zurück
double median(const std::vector<double>& v);

//function moment, gibt das k-te statistische Momentn m_k aller Einträge des Vektors v zurück
double moment(const std::vector<double>& v, int k);

//function standard_deviation, gibt die Standardabweichung des Vektors v zurück
double standard_deviation(const std::vector<double>& v);

#endif  // STATISTICS_HH
