#include <stdio.h>
int main(){
int i,arr[5];
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
int a,b,c,d,e;//+ve ,-ve, even, odd, no. of zero respectively
a=0;b=0;c=0;d=0;
for(i=0;i<5;i++){
     arr[i]<0 ? b++:a++;
     arr[i]%2==0?c++:d++;
    }
printf("positive=%d\nnegative=%d\neven=%d\nodd=%d\n",a,b,c,d,e);   
    
   }







