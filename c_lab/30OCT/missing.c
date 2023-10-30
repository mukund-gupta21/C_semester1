#include <stdio.h>
#define n 8
int main(){
int i;
int a[n-1] = {1, 2, 4, 6, 3, 7,8};
int arr[n];
arr[0]=0;
for(i=0;i<n;i++){
    arr[a[i]]++;
    }
for(i=1;i<n+1;i++){
    if(arr[i]==0) printf("%d",i);
}

}
