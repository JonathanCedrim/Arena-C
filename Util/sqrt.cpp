#include <math.h>

double squareRoot(const double a){
    double b = sqrt(a);
    if(b != b) {
        return 0;
    } else {
        return sqrt(a);
    }
}