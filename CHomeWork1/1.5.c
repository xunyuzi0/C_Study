//大小写字母转换
#include <stdio.h>

int main(){
    char ch1 = 'a';
    printf("小写:%c,大写:%c\n",ch1,ch1-32);

    char ch2 = 'B';
    printf("小写:%c,大写:%c\n",ch2+32,ch2);

    return 0;
}