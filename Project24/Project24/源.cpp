#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
/*#define M 5
#define N 5
#define MaxSize 100
struct migong
{
	int a;
	int b;
	int dir;
}Stack[MaxSize], Path[MaxSize];

int top = -1;
int count1 = 0;
int minlen = MaxSize;


int mg[M + 2][N + 2];


void mgpath(int sx, int sy, int ex, int ey)
{
	int a, b, dir;
	int nextfound, k;
	top++;//初始节点进栈
	Stack[top].a = sx;
	Stack[top].b = sy;
	Stack[top].dir = -1;
	mg[1][1] = -1;


	while (top>-1)//栈不空时循环
	{
		a = Stack[top].a;//获取栈顶元素
		b = Stack[top].b;
		dir = Stack[top].dir;


		if (a == ex&&b == ey)//如果找到了出口(M,N)，则输出路径，并退栈，用新的栈顶方向值取代当前的查找方向
		{
			count1++;
			cout << "M:" << endl;
			for (k = 0; k <= top; k++)
			{
				cout << "(" << Stack[k].a << "," << Stack[k].b << ")" << endl;
			}
			cout << endl;


			if (top + 1<minlen)//求最短输出路径
			{
				for (k = 0; k <= top; k++)
				{
					Path[k] = Stack[k];
				}
				minlen = top + 1;
			}


			mg[Stack[top].a][Stack[top].b] = 0;


			top--;
			dir = Stack[top].dir;
		}


		nextfound = 0;
		while (dir<4 && nextfound == 0)
		{
			dir++;
			switch (dir)
			{
			case 0:a = Stack[top].a - 1; b = Stack[top].b; break;//上面
			case 1:a = Stack[top].a; b = Stack[top].b + 1; break;//右面
			case 2:a = Stack[top].a + 1; b = Stack[top].b; break;//下面
			case 3:a = Stack[top].a; b = Stack[top].b - 1; break;//左面
			}
			if (mg[a][b] == 0)
			{
				nextfound = 1;
			}
		}


		if (nextfound == 1)
		{
			Stack[top].dir = dir;


			top++;
			Stack[top].a = a;
			Stack[top].b = b;
			Stack[top].dir = -1;
			mg[a][b] = -1;
		}
		else
		{
			mg[Stack[top].a][Stack[top].b] = 0;
			top--;
		}
	}


	cout << "最短路径如下：" << endl;
	cout << "长度：" << minlen << endl;
	cout << "路径：" << endl;
	for (k = 0; k<minlen; k++)
	{
		cout << "(" << Path[k].a << "," << Path[k].b << ")" << endl;
	}
}


int main()
{  
	int sx, sy;
	int ex, ey;
	printf("请输入起点坐标\n");
	scanf("%d%d",&sx, &sy);
	printf("请输入终点坐标\n");
	scanf("%d%d",&ex, &ey);
	printf("迷宫图样，1代表墙，0代表道路\n");
	for (int i = 0; i < 7; ++i){
		for (int j = 0; j < 7; ++j){
			scanf("%d",&mg[i][j]);
		}
	}
	cout << "迷宫所有路径如下：" << endl;
	mgpath(sx,sy,ex,ey);*/
int main(){
	printf("\n\n\n");
	printf("没有这样的道路\n\n");
	system("pause");
	return 0;

}