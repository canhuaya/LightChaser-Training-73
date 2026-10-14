#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("交换前a的值为%d,b的值为%d\n",a,b);
    int temp=0;
    int *p1=&a;//获取a的地址，*解引用
    int *p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;//不用指针也可以，利用指针可以实现函数内的值的交换
    printf("交换后a的值为%d,b的值为%d\n",a,b);
    return 0;
}