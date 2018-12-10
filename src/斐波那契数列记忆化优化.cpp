#include<bits/stdc++.h>
using namespace std;

long long f[100000]; // 数据过大会爆
const long long MOD = 1e9+7; // 所以计算出的结果对1e9+7取模
long long fib(long long n){
    if(n == 1 || n == 2) return 1;
    else {
        return f[n]?f[n]:(f[n] = fib(n-1)+fib(n-2)%MOD);
    }
}


int main(){
    memset(f,0,sizeof(f));
    long long n;
    printf("我想知道斐波那契数列的第几项?   ");
    scanf("%lld",&n);
    printf("\n");
    printf("斐波那契数列的第%lld项是%lld",n,fib(n));
}