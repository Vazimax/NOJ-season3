#include <stdio.h>
#include <stdlib.h>

int main()
{
     long int i, n;
     double sum=0.0, term, pi;

     printf("Enter number of terms: ");
     scanf("%ld", &n);

     /* Applying Leibniz Formula */
     for(i=0;i< n;i++)
     {
      term = pow(-1, i) / (2*i+1);
      sum += term;
     }
     pi = 4 * sum;

     printf("%.4lf", pi);

    return 0;
}
