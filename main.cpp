#include <iostream>
#include "muller.h"

/**
 * function f that mullers method will compute the roots of
 * DO NOT TRY TO FIND COMPLEX ROOTS
 * I HAVE NOT ADDED THAT FUNCTIONALITY
 * IT COULD BE ADDED AS MULLERS METHOD ALLOWS THAT
 * BY DEFINING COMPLEX NUMBERS AND OVERLOADING OPERATORS
 * (ie, keep the number at or below 0)
 * 
 * The function below is desinged to compute sqrt(2) as
 * f(x) == x^2 - 2 == 0 if x == sqrt(2)
 * 
 * To find other roots just modify the function
 **/
double f(double x) {
    return x * x - 2;
}

/**
 * 
 * Main functions. Control the Program from here
 * 
 **/
int main(int argc, char **argv) {

    std::cout << muller(f, -1, 0, 1, 1.0e-10, true) << std::endl;

    return 0;
}