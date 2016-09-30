#include<stdio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("leap year");
}
else
{
printf("ordinary year");
}
}
