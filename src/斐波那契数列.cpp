#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7; // ������Ľ����1e9+7ȡģ

long long fib(long long n){
    if(n == 1 || n == 2) return 1;
    else {
        return fib(n-1) + fib(n-2) % MOD;
    }
}

int main(){
    long long n;
    printf("����֪��쳲��������еĵڼ���?   ");
    scanf("%lld",&n);
    printf("\n");
    printf("쳲��������еĵ�%lld����%lld",n,fib(n));
}