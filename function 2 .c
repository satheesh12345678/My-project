#include<stdio.h>
int primecheck(int n, int i)
{int count;
if(i-1)
{return 1;
}
else
{
if(n%i==0)
{
count=1;
}
else
{
return primecheck (n, i-1);
}
}
}
int main()
{
int n;
int check;
printf("ENTER A NUMBER: ");
scanf("%d", &n);
check = primecheck(n, n / 2);
if (check == 0)
{
printf(" %d IT IS NOT A PRIME NUMBER\n",n);
}
else
{
printf(" %d IT IS A PRIME NUMBER\n", n) ;
}
return 0;
}
