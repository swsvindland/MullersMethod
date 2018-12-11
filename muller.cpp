#include <iostream>
#include "muller.h"
#include "functions.h"

/**
 * 
 * https://en.wikipedia.org/wiki/Muller%27s_method
 **/
double muller(double (*f)(double), double x1, double x2, double x3, double error, bool debug) {
    double *y = (double *)malloc(3 * sizeof(double));
        y[0] = x1;
        y[1] = x2;
        y[2] = x3;

    double w = dividedDifference(f, y, 2) + dividedDifference(f, y+2, 2) + dividedDifference(f, y+1, 2);
    
    double t0 = approxSqrt(w*w - 4 * f(y[0]) * dividedDifference(f, y, 3));
    double t1 = y[0] - 2 * f(y[0]) / max(w+t0, w-t1);

    if(debug)
        std::cout << x1 << "\t" << x2 << "\t" << x3 << "\t" << t1 << "\t" << f(t1) <<  std::endl;

    if((abs(f(t1)) - error) < 0) {
        return t1;
    }
    return muller(f, x2, x3, t1, error, debug);
}

