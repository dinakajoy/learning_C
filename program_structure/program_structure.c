// The preprocessor section - Headers
#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define AREA(r) (PI*r*r)

// The Global Declaration Section - Forward declaration
int radius = 5;
float side = 5.50;
float area_of_square(float);

// The main() Function section
int main() {
   float area = AREA(radius);
   printf("Area: %f\n", area);
   
   float square_area = area_of_square(side);
   printf ("Side=%5.2f Area=%5.2f\n", side, square_area);
   return 0;
}

/* Subroutine section - Subroutines */
float area_of_square(float side) {
   float area = pow(side, 2);
   return area;
}