#include <stdio.h>
#include<string.h>
int main()
{
char a[100];
int i=1,n;
printf("Enter the string:\t");
gets(a);
printf("Enter the number:\n");
scanf("%d\n",&n);
while(i<=n)
{
printf("%s\n",a);	
i++;	
}
}
