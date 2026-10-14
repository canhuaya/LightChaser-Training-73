#include<stdio.h>
int main()
{
    double a,b;
    char fu;
    printf("请输入计算式（仅限两式的简单计算）\n");
    scanf("%lf%c%lf",&a,&fu,&b);
    if(fu=='+')
    {
        printf("结果为%.2lf\n",a+b);//控制精确度
    }
    else if(fu=='-')
    {
        printf("结果为%.2lf\n",a-b);
    }
    else if(fu=='*')
    {
        printf("结果为%.2lf\n",a*b);
    }
    else if(fu=='/')
    {
        if(b==0)
        {
            printf("结果出错\n");//除数为0的情况；
        }
        else
        {
            printf("结果为%.2lf\n",a/b);
        }
    }
       else
    {
        printf("未输入正确运算符\n");
    }
    return 0;
}