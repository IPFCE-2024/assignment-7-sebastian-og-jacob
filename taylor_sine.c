#include "taylor_sine.h"
#include <assert.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979

// Funktion, som giver approksimation af sin(x) i form af Taylorpolynom på n led
double taylor_sine(double x, int n) {
  // tjekker precondition
  assert(n > 0);

  // Konverterer input, så input bliver vinkel i radianer mellem 0 og 2pi
  int div = x / (2 * PI);
  double num = x - (double)div * 2 * PI;
  
  // Første led af taylorrække regnes uden for for-loop
  double part = num;  // part er n'te led i Taylorpolynomiet
  double output = part;  // Output er summen af alle ledene

  // Udregner resterende n-1 led af Taylorpolynomiet
  for(int i = 1; i < n; i++){
    // Fortegnet på part ændres
    part *= -1;
    /*Da leddene i Taylorpolynomiet har formen (-1)^n * num^(2n+1) / (2n+1)! kan det næste led
    regnes ved, at gange det forrige med num 2 gange og dele med hhv. 2i+1 og 2i.
    De forskellige operationer regnes separat for at dele/gange med et så lille tal som muligt,
    for at bevare mest mulig præcision (at dele med (2n+1)! kan være urpæcist fordi n! er meget stor,
    mens det er mere overkommeligt at dele med 2n+1 og 2n).*/
    part = part*num;
    part = part/(i*2+1);
    part = part*num;
    part = part/(i*2);
    output += part;
  }
  return output;
}