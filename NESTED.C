

main()
{
int r,sp,p,no,n;
clrscr();
printf("enter the number of row ");
scanf("%d",&no);
n=no;
for(r=1;r<=no;r++)
{
for(sp=1;sp<=n;sp++)
{
printf(" ");
}
n--;
for(p=1;p<=r;p++)
{
printf("%d ",r);
}
printf("\n");
}
getch();
}















