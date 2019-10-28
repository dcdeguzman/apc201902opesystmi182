#include <stdio.h>

int main() {
   int sum = 0;

   int upperbound;


   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);


   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;
      ++number;
   }

   printf("The sum from 1 to %d is %d.\n", upperbound, sum);

   return 0;
}
