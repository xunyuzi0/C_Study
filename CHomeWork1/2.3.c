#include<stdio.h>
#include<math.h>

int main()
 
{
    int i  = 0;
    int n = 0;
    scanf("%d",&n);
    
    for(i = 1; i < 6; i++){
        printf("%d   ",n/(int)pow(10,5-i));
        n %= (int)pow(10,5-i);
    }
 
    return 0;
 
}
 