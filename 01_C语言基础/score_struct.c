#include<stdio.h>
typedef struct
{
    char name[100];
    int score;
}chengjidan;
int main()
{
    chengjidan a1={"wang",80};
    printf("%s的成绩为%d",a1.name,a1.score);//注意是a1.……
    return 0;
}