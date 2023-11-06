#include<stdio.h>
int main(){
	int a1[2][3]={1,2,3,
						 4,5,6};
	int a2[3][2]={10,11,
	                     20,21,
	                     30,31};
	int i,j,k,sum=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				sum=sum+ (a1[i][k] * a2[k][j]);
			}
			printf("%d ",sum);
			sum=0;				
		}
		printf("\n");
 
	}
 
}
