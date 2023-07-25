#include <stdio.h>

int main() {
    float s,t;
    printf("Enter the salary:");
    scanf("%f",&s);
    printf("Enter the no. of years of experience:");
    scanf("%f",&t);
    if(t>=5)
    {
        if(s>5000)
         printf("Bonus is:%f",0.8*s);
        else
         printf("Bonus is:%f",0.6*s);
         
    }
    else if(t<5)
    {
        printf("Bonus is:%f",0.5*s);
    }
      
    

    return 0;
}