#include <stdio.h>

void main(){
int n,i,c;
n=2;
while(n<=300){
	i=2;c=0;
	while(i<=n){
		if(n%i==0)c++;
		i++;}
	if(c==1) printf("%d ",n);
	n++;
	}

}
