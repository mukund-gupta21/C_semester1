#include<stdio.h>
int main(){
	int n,k;
	printf("enter no. of elements ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter k to find kth smallest no. ");
	scanf("%d",&k);
	
	int i,j,key;
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && key <a[i]){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	printf("%d",a[k-1]);
	
	
}
