#include <stdio.h>

int main() {
    int a,n,b;
    printf("Enter the number:");
    scanf("%d",&a);
    for(n=0;n<=10;n++)
    {
        b=n*a;
        printf("\n%d*%d=%d",a,n,b);
    }

    return 0;
}