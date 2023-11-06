#include<stdio.h>

void repeat(int a[],int n){
	int c[n];
	for (int i = 0; i < n; i++) {
        c[i] = 0;
    }
	for(int i=0;i<n;i++){
		if(c[a[i]]==1){
			printf("%d ",a[i]);
			c[a[i]]++;
		}
		else c[a[i]]++;
	};
}
int main(){
	int a[]={1,3,5,1,1,5};
	int n=sizeof(a)/sizeof(a[0]);
	repeat(a,n);
	
}