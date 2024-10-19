#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

int main(void){
   
    double num;
    int degree;
    printf("Indtast værdi:\n");
    scanf("%lf",&num);
    scanf("%d",&degree);
    printf("Vores version %lf math version %lf",taylor_sine(num,degree), sin(num));

    return 0;
}

// For degree > 8 har vi en præcision på 6 decimaler
// For 8 > degree > 5 får vores version upræcise svar
// For 5 > degree > 1 får vi forkerte svar med fortegnsfejl
// For degree = 1 Finder vi num fordi taylorfunktionen netop tager input x.
// For degree < 1 Assertion fejl