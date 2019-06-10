#include<stdio.h>
int i,a,b;
void main()
{
clear();
sum();
clear();
getch();
}
clear()
{
for(i=1;i<=44;i++)
{
printf("                              ");
}
return;
}
sum()
{
clear();
printf("Enter the values ");
scanf("%d",&a);
printf("enter the value " );
scanf("%d",&b);
printf("%d",a+b);
return;
}