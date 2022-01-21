#include<stdio.h>
int main()
{
    int i,r,n;
    scanf("%d %d",&n,&r);
    for(i=1;i<=r;i=i+2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
    return 0;
}