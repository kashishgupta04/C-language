#include <stdio.h>

int main() {
    int a,b,c;
    printf("side1 is:");
    scanf("%d",&a);
    printf("side2 is:");
    scanf("%d",&b);
    printf("side3 is:");
    scanf("%d",&c);
    (a==b && b==c)?printf("Triangle is equilateral"):printf("Triangle is not equilateral");
    


    return 0;
}