//整形数据的溢出
#include <stdio.h>

int main(){
    int a = 2147483647;
    //a为2的31次方-1
    //注意普通的整形数据最高位负责正负，故而不是32次方
    printf("上限:%d,溢出：%d",a,a+1);

    return 0;
}