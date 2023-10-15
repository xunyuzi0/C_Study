//字符类型的数据和整型数据，都可以用%d和%c表示
#include <stdio.h>

int main(){
    char ch = 65;
    int a = 66;

    printf("整形:%d,字符:%c\n",ch,ch);
    printf("整形:%d,字符:%c\n",a,a);

    return 0;
}