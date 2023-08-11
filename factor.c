#include <stdio.h>

int main() {
    int a,n;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("\nFactors of %d are\n:-",a);
    for(n=1;n<=a;n++)
    {
        if (a%n==0)
        {
         
         printf("%d\n",n);
        }
    }

    return 0;
}