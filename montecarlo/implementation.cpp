#include "header.hpp"

double monteCarloPi(int numSamples) {
    int insideCircle = 0;

    for (int i = 0; i < numSamples; ++i) {
        double x = static_cast<double>(rand()) / RAND_MAX;
        double y = static_cast<double>(rand()) / RAND_MAX;

        if (x * x + y * y <= 1.0) {
            ++insideCircle;
        }
    }

    return 4.0 * insideCircle / numSamples;
}

double calculateError(double estimatedPi) {
    const double actualPi = 3.14159265358979323846;
    return std::abs((estimatedPi - actualPi) / actualPi) * 100.0;
}

void printErrorMessage(double error) {
    if (error < 0.01) {
        std::cout << "Excellent! The error is less than 0.01%." << std::endl;
    } else if (error < 0.1) {
        std::cout << "Great! The error is less than 0.1%." << std::endl;
    } else if (error < 1.0) {
        std::cout << "Good! The error is less than 1%." << std::endl;
    } else {
        std::cout << "The error is greater than 1%. Consider increasing the number of samples." << std::endl;
    }
}

double runMultipleSimulations(int numSimulations, int numSamples) {
    double totalPi = 0.0;

    for (int i = 0; i < numSimulations; ++i) {
        totalPi += monteCarloPi(numSamples);
    }

    return totalPi / numSimulations;
}

void printSummary(int numSimulations, int numSamples, double averagePi) {
    std::cout << "Summary of Monte Carlo Pi Estimation:" << std::endl;
    std::cout << "Number of simulations: " << numSimulations << std::endl;
    std::cout << "Number of samples per simulation: " << numSamples << std::endl;
    std::cout << "Average estimated value of Pi: " << averagePi << std::endl;
    double error = calculateError(averagePi);
    std::cout << "Error percentage: " << error << "%" << std::endl;
    printErrorMessage(error);
}
