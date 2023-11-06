#include<stdio.h>
int peak(int a[],int n){
	int i;
	if(n==1) return 0;
	if(a[0]>a[1]) return 0;
	if(a[n-1] > a[n-2]) return n-1;
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1]) return i;
	}
}
int main(){
	int a[]={7,32,67,17,56,-1,8};
	int n=sizeof(a)/sizeof(a[0]);
	int x=peak(a,n);	
	printf("%d",a[x]);
}