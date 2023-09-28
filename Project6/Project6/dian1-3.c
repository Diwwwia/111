#include <stdio.h>
int main() {
	int which[10] = { 0 };//哪里有人等电梯
	int where[10] = { 0 };//那个人要去哪层
	int c;//电梯初始楼层
	int people;
	int check;
	int dt;//电梯
	/*int check(); {
		if (people < 4) {
			for (int i = 0; i < 10; ++i) {
				if (dt == which[i]) {
					which[i] = 0;
					people += 1;

				}
			}
		}
		return 0;
	}没干好 寄*/

	//int check max函数电梯人数最大容量转方向
	//int check min函数无人就转方向


	printf("请输入电梯初始楼层\n");
	for (int i = 0; i < 1; ++i) {
		scanf("%d", &c);
		if (c < 1 || c>10) {//或（||）符号
			i -= 1;
			printf("电梯范围限（1至10），请重新输入\n");
		}
	}
	//因数组原因以which where代替原来的a b
	printf("请输入哪层有一人等候电梯:,请输入要到哪一层：(输入（0 0）即默认输入完毕)（最多输入十次：假设最大情况 十层 每层都有一人）\n");
	for (int i =0; i < 10; ++i) {//假设最大情况 十层 每层都有一人
    	scanf("%d%d", &which[i], &where[i]);
		if (which[i] == 0 && where[i] == 0) {
			break;
		}
		if (which[i] < 1 || which[i]>10 || where[i] < 1 || where[i]>10){
			i -= 1;
			printf("不在楼层范围（1至10），请重新输入\n");
		}
		for (int j = 0; j < i; ++j) {//排除同一楼层有两人情况，且此不考虑过后时间又有人按电梯
	    	if(which[j]== which[i]) {
			    printf("和人撞楼层了哥们，换一层去\n");
				i -= 1;
			}
		}
	}
	return 0;
}
//printf("%d %d %d\n%d %d %d\n%d %d %d", c, 0, 0, which[i] , abs(which[i] - c), 1, where[i], abs(which[i] - c) + abs(where[i] - which[i]), 0);