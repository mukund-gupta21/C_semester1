#include <stdio.h>
int main(){
int i,temp;
int a[]={2,3,6,7,8,1,7,10,11};
int n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n-1;i+=2){
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    
}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

}
