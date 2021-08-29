#include<stdio.h>

int sum (a,b,c,d)

{int sum;
sum= a+b+c+d;
}
int main()
{
int a,b,c,d;

printf("enter four numbers \n");

scanf("%d%d%d%d", &a,&b, &c, &d);

printf("SUM OF DIGITS IS :%d", sum (a,b,c,d));

return 0;
}
