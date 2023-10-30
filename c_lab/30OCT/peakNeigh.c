#include <stdio.h>
int main(){
int a[]={2,3,6,7,8,1,7,10,11};
int i;
int n=sizeof(a)/sizeof(a[0]);
for(i=1;i<n;i++){
    if(a[i-1]<a[i] && a[i]>a[i+1]) 
        printf("%d\n",a[i]);
    }
}
