#include <stdio.h>

int main() {
    int a,b,n,m;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    m=0;
    for(n=1;n<=b;n++)
    {
       m+=a;
    }
    printf("Product of %d and %d is %d ",a,b,m);
    return 0;
}