//运算符的短路原理
#include <stdio.h>

int main(){
    
    int a = 2,b = 3;

    if(a == 2 || b++ == 5)//不进行b++
        printf("b = %d\n",b);

    if(a == 3 && b++ == 5){}//不进行b++
    else
        printf("b = %d\n",b);

    return 0;
}