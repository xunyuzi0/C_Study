#include<stdio.h>
#include<string.h>

int main()
{
    double math;
    double eng; 
    double comp;
    double average;

    char s[6][50];
    scanf("%s",&s[0][0]);
    scanf("%s",&s[1][0]);
    scanf("%s",&s[2][0]);

    sscanf(s[0], "%*[^=]=%s", s[3]);
    sscanf(s[1], "%*[^=]=%s", s[4]);
    sscanf(s[2], "%*[^=]=%s", s[5]);

    sscanf(s[3], "%lf", &math);
    sscanf(s[4], "%lf", &eng);
    sscanf(s[5], "%lf", &comp);
    // printf("%lf %lf %lf",math,eng,comp);
    average = (double)(math+eng+comp)*1.0/3.0;

    printf("average=%.2lf",average);

    return 0;
 
}
 