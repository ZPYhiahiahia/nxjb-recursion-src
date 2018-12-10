#include <stdio.h>


//将n个圆盘从x柱子上借助y柱子移动到z柱子上
void move(int n, char x, char y, char z)    
{
    if(n == 1)
       printf("圆盘编号 %d :从 %c 移动到 %c\n",n,x,z);
    else
    {
        move(n-1,x,y,z);
        printf("圆盘编号 %d:从 %c 移动到 %c\n",n,x,z);
        move(n-1,y,x,z);
     }

}


int main()
{
    //A,B,C分别代表三个柱子 设置三根柱子的名字
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';

    int n;   //n代表圆盘的个数
    printf("请输入圆盘的个数：");
    scanf("%d",&n);
    move(n,ch1,ch2,ch3);
    
    return 0;  
}

/*
    解决汉诺塔问题 : 
    关键是使用中间柱 ( 除了当前柱和目标柱的另一根柱子 )
    1. 把上层的n-1个圆盘从**当前柱**移动到**中间柱**
    2. 把最下边一个圆盘从**当前柱**移动到**目标柱**
    3. 把剩余的n-1个圆盘从**中间柱**移动到**目标柱**

    递归出口 : 当剩下最小的一片的时候,把他从**当前柱**直接移到**目标柱**

    ( 执行完第三部之后 中间柱->当前柱 )
*/