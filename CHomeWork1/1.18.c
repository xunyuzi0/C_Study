//对输入两个数的四则运算
#include <stdio.h>

int main(){
    
    double num1,num2;
    scanf("%lf%lf",&num1,&num2);

    printf("+:%.2lf\n",num1+num2);
    printf("-:%.2lf\n",num1-num2);
    printf("*:%.2lf\n",num1*num2);
    printf("/:%.2lf\n",num1/num2);

    return 0;
}
