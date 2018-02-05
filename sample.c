#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter range....");
scanf("%d%d",&b,&c);
for (a=b;a<=c;a++)
{
if(a%2==0)
printf("\n%d",a);
}
return 0;
}
