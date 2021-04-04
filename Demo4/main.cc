#include <stdio.h>
#include <stdlib.h>
#include "include/MathPower.h"
#include "include/MathHypot.h"


int main(int argc, char *argv[])
{
    if (argc < 3){
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);

    result = hypot(base, exponent);
    printf("%g and %d hypot is %g\n", base, exponent, result);
    return 0;
}