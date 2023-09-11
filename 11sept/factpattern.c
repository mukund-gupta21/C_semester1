#include <stdio.h>

float fact(int x){
int fact,j; 
fact=1;
for(j=1;j<=x;j++) fact*=j;
return fact;}

void main(){
int i,n;
float sum;
printf("enter n th term ");
scanf("%d",&n);
i=1;sum=0;
while(i<=n){
	sum=sum + i/fact(i);
	i++;}	
printf("%f",sum);



}
