#include<stdio.h>
#define n 3
int main(){
	int i,j,flag;
	int a[n][n]={{1,2,7},
	              {2,1,3},
	              {1,3,4}};
	for(i=0;i<3;i++){
	    j=0;flag=1;
		while(j<i){
			if(a[i][j]==a[j][i])  j++;
			else{
				flag=0;
				break;
				}
		}
	}
	if(flag) printf("symmetric\n");
	else printf("not symmetric\n");







}
