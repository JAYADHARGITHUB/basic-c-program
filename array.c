#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],i,n;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    printf("%d %d\n",a[i],i);
}}
