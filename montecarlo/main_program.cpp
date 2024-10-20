#include "header.hpp"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int numSamples = 1000000; // Number of samples per simulation
    int numSimulations = 10;  // Number of simulations

    double averagePi = runMultipleSimulations(numSimulations, numSamples);

    printSummary(numSimulations, numSamples, averagePi);

    return 0;
}
