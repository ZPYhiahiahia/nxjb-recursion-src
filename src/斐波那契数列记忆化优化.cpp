#include<bits/stdc++.h>
using namespace std;

long long f[100000]; // ���ݹ���ᱬ
const long long MOD = 1e9+7; // ���Լ�����Ľ����1e9+7ȡģ
long long fib(long long n){
    if(n == 1 || n == 2) return 1;
    else {
        return f[n]?f[n]:(f[n] = fib(n-1)+fib(n-2)%MOD);
    }
}


int main(){
    memset(f,0,sizeof(f));
    long long n;
    printf("����֪��쳲��������еĵڼ���?   ");
    scanf("%lld",&n);
    printf("\n");
    printf("쳲��������еĵ�%lld����%lld",n,fib(n));
}