//两个数的交换
#include <stdio.h>
void exchange(int*, int*);
int main(){
    int a = 10;
    int b = 20;
    printf("a = %d,b = %d\n",a,b);
    exchange(&a, &b);
    printf("a = %d,b = %d\n",a,b);
    return 0;
}
void exchange(int* x, int* y){
    int t = 0;
    t = *x;
    *x = *y;
    *y = t;
}