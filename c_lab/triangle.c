#include <stdio.h>

void main(){
int x,y,z;
printf("enter 3 sides of triangle in increasing order ");
scanf("%d%d%d",&x,&y,&z);
if(x==y && y==z) printf("equilateral\n");
else if(x==y || y==z) printf("isosceles\n");
else printf("scalene\n");
if(z*z==x*x + y*y)printf("right angled\n");






}
