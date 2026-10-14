#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<100;i=i+2)
    {
        sum=sum+i;
    }
    printf("奇数和为%d",sum);
    return 0;
}