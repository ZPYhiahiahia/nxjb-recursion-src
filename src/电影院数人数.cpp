#include<bits/stdc++.h>
using namespace std;

int whereAmI(int n){  
    if( n == 1){
        printf("�ش�: ���ǵ�1��!\n");
        return 1;
    }else{
        printf("��%d����: ���ǵڼ���?\n",n);
        int now = whereAmI(n-1)+1;
        printf("�ش�: ���ǵ�%d��!\n",now);
        return now;
    }
}

int main(){
    srand((int)time(NULL));
    int pos = rand()%10; // ���һ�������λ�� 
    int now = whereAmI(pos);
    printf("%d",now);
    
    


}