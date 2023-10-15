//sizeof运算符
#include <stdio.h>

int main(){
    
    int a = sizeof(short);
    int b = sizeof(int);
    int c = sizeof(float);
    int d = sizeof(double);
    int e = sizeof(long);

    printf("a = %d,b = %d,c = %d,d = %d,e = %d",
    a,b,c,d,e);

    return 0;
}