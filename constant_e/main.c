#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    double output = 1.0, fac=1.0;
    scanf("%d",&input);

    for (int i=1;i<=input;i++){
        fac = fac * i;
        output += 1/fac;
    }

    printf("%.06f",output);

    return 0;
}
