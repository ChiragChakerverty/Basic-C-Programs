#include<stdio.h>

int main()
{
    int a,b,c,d,e,num,revnum;
    printf("enter the number at one's place=\n");
    scanf("%d" , &a);
    printf("enter the number at ten's place=\n");
    scanf("%d" , &b);
    printf("enter the number at hundred's place=\n");
    scanf("%d" , &c);
    printf("enter the number at thousand's place=\n");
    scanf("%d" , &d);
    printf("enter the number at ten thousand's place=\n");
    scanf("%d" , &e);
    num=(10000*e)+(1000*d)+(100*c)+(10*b)+(1*a);
    printf("the five digit number which is to be reversed is =%d\n" , num);
    revnum=(10000*a)+(1000*b)+(100*c)+(10*d)+(1*e);
    printf("the reversed number is = %d\n" , revnum);
    return 0;



}