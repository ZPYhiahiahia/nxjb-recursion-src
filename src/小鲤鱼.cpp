#include <stdio.h> 
void Recursion(int depth){
    printf("抱着");
    if (!depth) {
        printf("我的小鲤鱼");
    }
    else {
        Recursion(--depth);
    }
    printf("的我");
}
int main(){
    printf("吓得我抱起了\n");
    Recursion(2);
    putchar('\n');
}
