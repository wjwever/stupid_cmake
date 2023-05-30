#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "pow.h"
#include "sqrt.h"

int main(int argc, char *argv[])
{
    if (argc != 3) {
        // print version info
        printf("Usage: %s [pow|sqrt] digit \n", argv[0]);
        return 1;
    }
    double base = atof(argv[2]);
    if (strcmp(argv[1], "pow") == 0) {
        double result = pow(base);
        printf("pow(%f) is %g\n", base, result);
    } else if (strcmp(argv[1], "sqrt") == 0) {
        double result = sqrt(base);
        printf("sqrt(%f) is %g\n", base, result);
    } else {
        printf("invalid operater %s", argv[1]);
    }
    
    return 0;
}
