#include <stdio.h> 
void Recursion(int depth){
    printf("����");
    if (!depth) {
        printf("�ҵ�С����");
    }
    else {
        Recursion(--depth);
    }
    printf("����");
}
int main(){
    printf("�ŵ��ұ�����\n");
    Recursion(2);
    putchar('\n');
}
