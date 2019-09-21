//to make calculator
#include<stdio.h>
void main()
{
int a,n,i,d,num1[30];
float b,sum=0,num[30],multiply=1;
printf("press 1 for addition\n");
printf (" press 2 for subtraction\n");
printf (" press 3 for multiplication\n");
printf(" press 4 for division\n");
printf(" press 5 for modulus\n");
printf("enter your choice\n");
scanf ("%d",&a);
switch (a)
{
case 1:
printf("enter the number of terms you want to add\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
 printf(" enter num %d :",i+1);
 scanf("%f",&num[i]);
 sum=sum+num[i];}
 printf("sum of numbers is %f",sum);
break;
case 2:
printf("enter the number of terms you want to subtract\n");
scanf("%d",&n);
printf("enter num 1:");
scanf("%f",&b);
for (i=0;i<n-1;i++)
{
 printf (" enter num %d:",i+2);
 scanf("%f",&num[i]);
 b=b-num[i];
 }
 printf("difference of number is %f",b);
break;
case 3:
printf("enter the number of terms you want to multiply\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf (" enter num %d:",i+1);
 scanf("%f",&num[i]);
 multiply =  multiply*num[i];}
 printf("multiplication of number is %f",multiply);
break;
case 4:
   printf("enter the number of terms you want to divide\n");
scanf("%d",&n);
printf("enter num 1:");
scanf("%f",&b);
for (i=0;i<n-1;i++)
{
 printf(" enter num %d :",i+2);
 scanf("%f",&num[i]);
 b=b/num[i];}
 printf("division of number is %f",b);
break;
case 5:
  printf("enter the number of terms of which you want the modulus\n");
scanf("%d",&n);
printf("enter num 1:");
scanf("%d",&d);
for (i=0;i<n-1;i++)
{
 printf(" enter num %d :",i+2);
 scanf("%d",&num1[i]);
 d=d%num1[i];}
  printf("modulus of number is %d",d);
break;
default:
printf ("no operation is used");}

}



