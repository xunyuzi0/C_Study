#include <stdio.h>

int main() {
    int math, eng, comp;
    float average;

    scanf("math=%d eng=%d comp=%d", &math, &eng, &comp);
    average = (double)(math + eng + comp)*1.0 / 3.0;

    printf("average=%.2f\n", average);

    return 0;
}
