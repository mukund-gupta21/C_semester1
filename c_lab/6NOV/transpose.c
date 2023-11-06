#include<stdio.h>
int main(){
	int a[4][4]={0};
	int i,j,temp;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++){
	    j=0;
		while(j<i){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			j++;
		}
	}
	i=0;j=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
			





}
