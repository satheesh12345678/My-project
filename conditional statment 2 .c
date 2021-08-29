#include<stdio.h>
void main()
{
int n;
printf("enter any number between 1 to 5 \n"); scanf("%d", &n) ;
switch (n)
{
case 1:
printf("the food item is pasta, price=179RS", n=1);
break;
case 2:
printf("the food item is burger, price=129RS", n=2);
break;
case 3:
printf("the food item is pizza, price=239RS", n=3);
break;
case 4:
printf("the food item is sandwich, price=149RS",n=4);
break;
case 5:
printf("the food item is french fries, price 99RS",n=5);
break;
default:
printf("invalid choice");
}
return 0;
}
