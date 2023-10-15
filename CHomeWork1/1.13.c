//浮点数的非精确储存
#include <stdio.h>

int main(){
    
    float a = 0.01;
    float b = a - 0.01;
    //按照惯性思维，b应等于0.00并严格等于0
    //实则不然
    if(b == 0){
        printf("b等于0");
    }else{
        printf("b不等于0");
    }

    return 0;
}