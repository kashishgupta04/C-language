#include <stdio.h>

int main() {
    int a,b,n;
    printf("Enter starting number:");
    scanf("%d",&a);
    printf("Enter ending number:");
    scanf("%d",&b);
    for(n=a;n<=b;n++)
    {
        if(n%3==0 || n%5==0)
        printf("\n%d",n);
    }

    return 0;
}