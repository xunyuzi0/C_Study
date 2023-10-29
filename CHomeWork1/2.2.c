#include<stdio.h>
#include<math.h>
 
int main()
 
{
 
    double rate,money,year,z;
    printf("Enter money,year and rate:");
    scanf("%lf%lf%lf",&money,&year,&rate);
    z=pow(1+rate,year);

    printf("interest=%.2lf",money*z-money);
 
    return 0;
 
}
 