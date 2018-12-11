#include <iostream>
#include "functions.h"

/**
 * 
 * https://en.wikipedia.org/wiki/Divided_differences
 */
double dividedDifference(double (*f)(double), double *x, int n) {
    double sum = 0.0;
    for(int j = 0; j < n; ++j) {
        double product = 1.0;
        for(int k = 0; k < n; ++k) {
            if(k != j) {
                product *= x[j] - x[k];
            }
        }
        sum += (*f)(x[j]) / product;
    }
    return sum;
}

/**
 * 
 * https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method
 */
double approxSqrt(double x) {
    double error = x * 1e-8; 
    double s = x;

    while ((s - x / s) > error) {
        s = (s + x / s) / 2;
    }
    return s;
}

double max(double x, double y) {
    if(x >= y) {
        return x;
    }
    return y;
}

double abs(double x) {
    if(x > 0) {
        return x;
    }
    return -1 * x;
}