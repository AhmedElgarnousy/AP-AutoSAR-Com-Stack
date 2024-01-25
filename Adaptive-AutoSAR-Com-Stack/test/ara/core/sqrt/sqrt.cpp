#include <math.h>

double squareRoot (const double a) {
    double b = sqrt(a);
    if(b != b) // NaN check
        {
             return -1.0; 
        }
    else
        { 
            return sqrt(a); 
        }
}