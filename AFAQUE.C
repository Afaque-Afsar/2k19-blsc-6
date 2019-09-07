int n;
largest();
smallest();
sum();
pair();
minimum();
repeating();
smissing();
missing();
odd();
void main()
{
clrscr();
printf("\n\nQuestion 1.Write a program in c to find the largest element in a given array.\nQuestion 2.Write a program in c to find the smmalest element in a given array.\nQuestion 3.Write a program in c to find the sum of all element in a given array.\nQuestion 4.Write a program in c to find a pair with the given difference.\nQuestion 5.Wtite a program in c to find the minimum distance between two numbers in a given array.\nQuestion 7.Write a program in c to find the two repeating element in a given array.\nQuestion 8.Write a program in c to find two elements whose sum is closect to zero.");
printf("\nQuestion 9.Write a program in c to print next higher element in given array.\nQuestion 11.Write a program in c to find the missing element from a given array.\nQuestion 12.Write ap program in c to find the number occuring add number of times in an array.");
printf("\n\n\tEnter Question number : ");
scanf("%sr",&n);
switch(n)
{
case'1':
{
largest();
}
break;
case'2':
{
smallest();
}
break;
case'3':
{
sum();
}
break;
case'4':
{
pair();
}
break;
case'5':
{
minimum();
}
break;
case'7':
{
repeating();
}
break;
case'10':
{
smissing();
}
break;
case'11':
{
missing();
}
break;
case'12':
{
odd();
}
break;
}
getch();
}

largest()
{
long int i,l,n,ary[10];
clrscr();
printf("enter number : \n");
scanf("%ld",&ary[0]);
l=ary[0];
for(i=1;i<10;i++)
{
scanf("%ld",&ary[i]);
if(ary[i]>l)
l=ary[i];
}
printf("\nlargest Element is %ld :",l);
}
smallest()
{
long int i,s,n,ary[10];
clrscr();
printf("enter number : \n");
scanf("%ld",&ary[0]);
s=ary[0];
for(i=1;i<10;i++)
{
scanf("%ld",&ary[i]);
if(ary[i]<s)
s=ary[i];
}
printf("\nlargest Element is %ld :",s);
}
sum()
{
int i,a[10],sum=0;
clrscr();
printf(" The given array is : \n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum of given array is : %d",sum);
}
pair()
{
int i,j,a[5],b;
clrscr();
printf("The given array are \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("The given array are \n");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
printf("\n The given difference is : ");
scanf("%d",&j);
for(i=0;i<5;i++)
{
for (b=i+1;b<5;b++)
if(a[b]-a[i]==j)
{
printf("the pair is %d  %d",a[i],a[b]);
}
}
}
minimum()
{
int a[5];
int i,j,min=1;
clrscr();
printf("The given array is :\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++);
{
for(j=i+1;i<5;j++)
{
if(a[j]-a[i]>min)
{
min=a[j]-a[i];
}
}
}
printf("minimum difference is %d",min);
}
repeating()
{
int i,ary[8],j,no=8;
clrscr();
printf("The given array is \n");
for(i=0;i<no;i++)
{
scanf("%d",&ary[i]);
}

for(i=0;i<no;i++)
{
for(j=i+1;j<no;j++)
{
if(ary[i]==ary[j])
{
printf(" The repeating Element is %d \n",ary[i]);
}
}
}
}
smissing()
{
int i,ary[8];
int n=8;
int a=n+1;
int b=a*(a+1)/2;
int c=0;
clrscr();
printf("The given array is ");
for(i=0;i<n;i++)
{
scanf("%d",&ary[i]);
c=c+ary[i];
}
printf("The missing element is %d",b-c);
}


missing()
{
int i,ary[8];
int n=8;
int a=n+1;
int b=a*(a+1)/2;
int c=0;
clrscr();
printf("The given array is ");
for(i=0;i<n;i++)
{
scanf("%d",&ary[i]);
c=c+ary[i];
}
printf("The missing element is %d",b-c);
}
odd()
{
int i, a[10];
int odd= 0;
clrscr();
printf("\nPlease Enter the Array Elements\n");
for(i = 0; i<9; i++)
{
scanf("%d", &a[i]);
if(a[i]%2!=0)
odd++;
}
printf("\n The Element Odd Number of times is : %d ", odd);
 }
