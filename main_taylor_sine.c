#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

int main(void){
    // Sygt episk kode - Ja det er det
    double num;
    scanf("%lf",&num);
    printf("Vores version %lf math version %lf",taylor_sine(num,100), sin(num));

    return 0;
}