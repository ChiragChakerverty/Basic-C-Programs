#include<stdio.h>
 
 int main()
 {
     int prin,time;
     float rate,si;
     printf("enter the value of principal=\n");
     scanf("%d" , &prin);
     printf("enter the value of time=\n");
     scanf("%d" , &time);
     printf("enter the value of rate=\n");
     scanf("%f" , &rate);

     si=prin*time*rate/100 ;
     printf("so the simple interest on the given values is=%f\n" , si);

     return 0;

 }