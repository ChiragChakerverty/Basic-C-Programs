#include <stdio.h>

int main()
{
    int a;
    float b,sum,subt,multi,div;

    printf("enter the value of a=\n");
    scanf("%d" , &a);
    printf("enter the value of b=\n");
    scanf("%f" , &b);

    printf("sum of a and b is=%f\n" , a+b);
    printf("a subtracted from b is=%f\n" , b-a);
    printf("a multiplied from b is=%f\n" , a*b);
    printf("b divided by a is =%f" , b/a);
    return 0;
}