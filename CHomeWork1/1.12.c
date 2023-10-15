//强制类型转换2
#include <stdio.h>

int main(){
    
    int *a = (int*)malloc(3*sizeof(int));
    a[0]= 1;
    a[1]= 2;
    a[2]= 3;

    printf("a[0]=%d, a[1]=%d, a[2]=%d\n",
    a[0],a[1],a[2]);

    return 0;
}