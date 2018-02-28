#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    i=a;
    a=b;
    b=i;
    printf(" the values after swapping are %d%d",a,b);
}
