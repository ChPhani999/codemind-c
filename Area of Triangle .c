#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C, area,S;
    scanf("%f %f %f",&A,&B,&C);
    S=(A+B+C)/2;
    area=sqrt(S*(S-A)*(S-B)*(S-C));
    printf("%0.2f",area);
    return  0;
}