#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int)malloc(5*sizeof(int));//一开始遗忘了malloc返回的是地址！以及遗忘了会发生隐式转换
    int sum=0;
    for(int i=0;i<5;i++)
    {
       *(p+i)=5*i;
       sum+=*(p+i);
    }
    int ave=sum/5;//也会有不是整数的部分
    printf("均值为%d",ave);
    free(p);
    return 0;
}