#include <stdio.h>
/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
int main(void) {
   long int n;
   n=612852475143;
   long int div=2, ans = 0, maxFact;
   while(n!=0) {
      if(n % div !=0)
         div = div + 1;
      else {
         maxFact = n;
         n = n / div;
         if(n == 1) {
            printf("%d is the largest prime factor !/n",maxFact);
            ans = 1;
            break;
         }
      }
   }
   return 0;
}
