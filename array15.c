# array
#include<stdio.h>
#include<conio.h>
void main ()
{
int num[30];
int i,j,tem;
printf("Enter the 5 numbers \n");
for(i=0;i<5;++i)
scanf("%d",&num[i]);
for(i=0;i<5;++i)
{
for(j=i+1;j<5;++j)
{
if(num[i]<num[j])
{
tem=num[i];
num[i]=num[j];
num[j]=tem;
}
} 
}
printf("Descending order of the numbers are \n");
for(i=0;i<5;++i)
{
printf("%d\n",num[i]);
}
}
