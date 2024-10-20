#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double monteCarloPi(int numSamples);
double calculateError(double estimatedPi);
void printErrorMessage(double error);
double runMultipleSimulations(int numSimulations, int numSamples);
void printSummary(int numSimulations, int numSamples, double averagePi);

#endif
