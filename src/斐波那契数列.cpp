#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7; // 计算出的结果对1e9+7取模

long long fib(long long n){
    if(n == 1 || n == 2) return 1;
    else {
        return fib(n-1) + fib(n-2) % MOD;
    }
}

int main(){
    long long n;
    printf("我想知道斐波那契数列的第几项?   ");
    scanf("%lld",&n);
    printf("\n");
    printf("斐波那契数列的第%lld项是%lld",n,fib(n));
}