#include<stdio.h>
void print(int n){// print 1 to n
    if(n==0)return;
    print(n-1);
    printf("%d ",n);
}

void print1(int n){// print n to 1
    if(n==0)return;
    printf("%d ",n);
    print1(n-1);
}

int sum(int n,int s){//print sum of n no.
    if(n==0) return s;
    sum(n-1,s+n);}

int power(int p,int q){//power of a no.
    if (q==0) return 1;
    return power(p,q-1)*p;
}

int fib(int n){//print nth fibo no.
    if(n==0 || n==1) return n;
    int x=fib(n-1)+fib(n-2);
    return x;
}

int pow(int p,int q){//power of a no.
	if(q==0) return 1;
	int smallpow=pow(p,q/2);
	if(q%2==0) return smallpow*smallpow;
	return p*smallpow*smallpow;}

void multiples(int n,int k){//k multipls of no.
	if(k==0)return;
	multiples(n,k-1);
	printf("%d  ",n*k);}

int seriesSum(int n){// 1-2+3-4+5-6+7-8+9-10
	if (n==0)return 0;
	if (n%2==0)return seriesSum(n-1) -n;
	else return seriesSum(n-1)+n;	}
	
int gcd(int x,int y){// hcf of two no.
	while(x%y!=0){
		int rem=x%y;
		x=y;y=rem;}
		return y;}
		
int gcd2(int x,int y){// hcf by euclid's algorithm'
	if(y==0) return x;
	return gcd(y,x%y);}
	
int main(){
//printf("%d",seriesSum(10));
printf("%d",gcd2(120,15));

}