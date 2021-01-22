#include<stdio.h>

int main()
{
    int num,amount1,amount2,amount3,ones,tens,hundreds,thousands,tenthousands,sum;
    printf("enter the five digit number=\n");
    scanf("%d" , &num);
    amount1=num%10000;
    amount2=amount1%1000;
    amount3=amount2%100;
    ones=amount3%10;
    tens=amount3/10;
    hundreds=amount2/100;
    thousands=amount1/1000;
    tenthousands=num/10000;
    sum=ones+tens+hundreds+thousands+tenthousands;
    printf("sum of the digits of the five numbered digit is=%d\n" , sum);
    return 0;
}