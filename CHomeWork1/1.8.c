//字符数据的溢出
#include <stdio.h>

int main(){
    char ch = 255;
    //根据ASCII码表char类型的范围是0~255

    printf("上限:%c\n溢出:%c",ch,ch+1);

    return 0;
}