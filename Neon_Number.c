#include<stdio.h>
int main()
{

    int N, sqr, rem, sum=0;
  scanf("%d",&N);

    sqr = N*N;

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; 
        sqr /= 10; 
    }

    if(sum==N)
        printf("Neon Number");
    else
        printf("Not Neon Number");

 }