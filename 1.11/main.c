/*
The majority of this code was already given, I just needed to change the 1 to 4.
*/


#include <stdio.h>
int main(void) {
   int hourlyWage;

   hourlyWage = 20;

   printf("Annual salary is: ");
   printf("%d", hourlyWage * 40 * 50);
   printf("\n");

   printf("Monthly salary is: ");
   printf("%d", ((hourlyWage * 40 * 50) / 4));
   // FIXME: The above is wrong. Change the 1 so the statement prints monthly salary.

   return 0;
}
