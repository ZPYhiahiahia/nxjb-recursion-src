#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return b?gcd(b,a%b):a; // շת�����
}

int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}