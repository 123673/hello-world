#include<iostream>
#include<cstring>
#include<algorithm>
int count1 = 0;
int fir[25];
int j = 0;
int maxn1;
int n;
int num[25];
int block[25][25];
int idx[25];
using namespace std;
void check(int cur)
{
	idx[cur] = 1;
	fir[maxn1++] = cur;
	for (int i = 1; i <= 25; i++){
		if (!idx[i] && block[cur][i] == 1) 
			check(i);
	}
}
void dfs(int cur){
	if (cur == n){
		count1++;
		for (int k = 0; k <= j; k++)  
			if(k==0) printf("%d", num[k]);
			else printf(" %d",num[k]);
		printf("\n");
		return;
	}

	for (int i = 1; i < maxn1; i++){
		if (block[cur][fir[i]] && idx[fir[i]] == 0){
			idx[fir[i]] = 1;
			j = j + 1;
			num[j] = fir[i];
			dfs(fir[i]);
			j--;
			idx[fir[i]] = 0;
		}
	}
}
int main(){
	int cot = 0;
	while (~scanf("%d", &n)){
		count1 = 0;
		int r, c;
	    maxn1 = 0;
		memset(block, 0, sizeof(block));
		memset(idx, 0, sizeof(idx));
		while (~scanf("%d%d", &r, &c)){
			if (r == 0 && c == 0) break;
			block[r][c] = block[c][r] = 1;
		}
		block[1][1] = 1;
		j = 0;
		num[0] = 1;
		check(n);
		sort(fir, fir + maxn1);
		memset(idx, 0, sizeof(idx));
		printf("CASE %d:\n", ++cot);
		dfs(1);
		printf("There are %d routes from the firestation to streetcorner %d.\n", count1, n);
	}
}
