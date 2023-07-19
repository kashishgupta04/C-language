#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaping numbers:%d %d ",a,b);
    
    return 0;
}