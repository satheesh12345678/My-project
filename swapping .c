#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter a number",x);
    scanf("%d,&x");
    printf("enter a number",y);
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("the swaped number is %d /n",x);
    printf("the swaped number is %d",y);
    return 0;
}
