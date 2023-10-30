#include <stdio.h>
int main(){
int i,j,temp;
int a[]={2,3,6,7,8,1,7,10,11};
int n=sizeof(a)/sizeof(a[0]);
i=0;j=n-1;
while(i<j){
    if(a[i]%2==0) i++;
    if(a[j]%2==0){
        temp =a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        }
      j--;
    }
for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }

}

