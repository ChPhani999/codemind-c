#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num1=N,c=0;
    while(num1!=0)
    {
        num1/=10;
        c++;
    }
    num1=N;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,c);
        num1/=10;
        c--;
    }
   if(sum==N)
    printf("True");
   else
    printf("False");
}