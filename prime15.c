#include<stdio.h>
#include<conio,h>
void main()
{
int n,i,count=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count=0;
}
else
{
count=1;
}
}
if(count!==0)
{
printf("prime number");
}
getch();
}
