#include<stdio.h>
#include<math.h>
int main()
{
    float v;     //volume
    float r;     //raio
    printf("escreva o raio:");
    scanf("%f", &r);
    v = (1.33) * 3.14 * pow(r,3);
    printf("volume aproximado do volume: %.2f ", v);
}
