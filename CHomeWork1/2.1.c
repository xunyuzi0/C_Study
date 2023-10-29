#include<stdio.h>

int main(){

    double r = 0;
    scanf("%lf",&r);

    printf("The diameter is %.2lf\n",2*r);
    printf("The circumference is %.2lf\n",2*r*3.14159);
    printf("The area is %.2lf\n",3.14159*r*r);

    return 0;
}