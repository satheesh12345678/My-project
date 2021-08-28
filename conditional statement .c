#include<stdio.h>
int main()
{
    int n;
    printf("enter the marks..");
    scanf("%d",&n);
    if(n>=85&n<=100)
{
    printf("GRADE 'A'");

}
if(n>=70&n<=84)
{
    printf("GRADE 'B'");
}
if(n>=55&n<=69)
{
    printf("GRADE 'C'");
}
if(n>=40&n<=54)
{
    printf("GRADE 'D'");
}
if(n<40)
{
    printf("GRADE 'F'");
}
return 0;
}
