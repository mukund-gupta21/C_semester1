#include <stdio.h>
void leapYear(){//to check leap year
int n;
printf("enter year to check leap or not ");
scanf("%d",&n);
if(n%400==0 || (n%4==0 && n%100!=0)) printf("leap year ");
else printf("not leap year ");}

void gregorianCalender(){
int n;//check 1st day of input year
long days;
printf("enter year to check first day ");
scanf("%d",&n);
days=(n-1)*365 +(n-1)/4  - (n-1)/100 +(n-1)/400 +1;
if(days%7==0)printf("Sunday");
else if(days%7==1)printf("Monday");
else if(days%7==2)printf("Tuesday");
else if(days%7==3)printf("Wednesday");
else if(days%7==4)printf("Thursday");
else if(days%7==5)printf("Friday");
else if(days%7==6)printf("Saturday");}

void collinear(){//check collinarity of three points
int x1,y1,x2,y2,x3,y3;
float m1,m2;
x1=3,y1=4, x2=6,y2=8, x3=9,y3=12;
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
m1==m2 ? printf("yes") : printf("no");}	
	
void main(){
gregorianCalender();


}