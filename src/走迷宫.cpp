#include<stdio.h>
#include<string.h> 

/*
    题意简述:
        给一个至多20*20的迷宫,迷宫中有空地0和障碍物1
        已知起始位置S(x0,y0),询问是否可以到达T(x1,y1)
        确保起始位置是一片空地
*/

/*
    代码仅供参考 , 题目定义可能不够严谨 , 理解思想就行了
*/

int n ; // 一个n*n的迷宫
int map[25][25] , book[25][25]; // map : 迷宫本身(0为空地,1为障碍物)  book : 记录是否走过 (0为没有,1为走过)
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}}; // 移动向量 , 0,1代表向上走一格 ...以此类推
int x1,y1,x0,y0; // 起始位置x0y0 终止位置x1y1
int won; // 是否走到终点 , 初始为0 , 走到了变1

void search(int x , int y){
    // 递归出口
    if(x == x1 && y == y1 || won == 1) {
        // 如果已经走到过终点,或当前走到终点则代表成功
        won = 1;
        return ;
    }

    // 如果当前位置已经来过了,则跳出函数体
    if(book[x][y] == 1){
        return;
    }
    book[x][y] = 1;

    // 代表当前位置在x,y
    for(int i = 0 ; i < 4 ; i ++){
        // 分别向四个方向移动
        // 如果下一步不是障碍物且不超过地图范围则对下一个点继续进行搜索
        if(map[x+dir[i][0]][y+dir[i][1]] != 1
            && x+dir[i][0] >= 0 
            && x+dir[i][0] < n
            && y+dir[i][1] >= 0
            && y+dir[i][1] < n
        )
            search(x+dir[i][0],y+dir[i][1]);
    }
}

int main(){
    // 数据的读入
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            scanf("%d",&map[i][j]);
        }
    }
    memset(book,0,sizeof(book)); // 把book数组初始化为0
    won = 0;
    scanf("%d %d %d %d",&x0,&y0,&x1,&y1);

    // 从起点开始搜索
    search(x0,y0);

    // 输出结果
    if(won) printf("可以到达终点!");
    else printf("不可以到达终点!");

}

/*
    3
    0 0 0
    0 0 0
    0 0 0
    0 0 2 2

    3
    0 1 0
    0 1 0
    0 1 0
    0 0 2 2
*/
