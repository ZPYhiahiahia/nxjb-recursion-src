#include<bits/stdc++.h>
using namespace std;

int whereAmI(int n){  
    if( n == 1){
        printf("回答: 我是第1排!\n");
        return 1;
    }else{
        printf("第%d排问: 我是第几排?\n",n);
        int now = whereAmI(n-1)+1;
        printf("回答: 我是第%d排!\n",now);
        return now;
    }
}

int main(){
    srand((int)time(NULL));
    int pos = rand()%10; // 获得一个随机的位置 
    int now = whereAmI(pos);
    printf("%d",now);
    
    


}