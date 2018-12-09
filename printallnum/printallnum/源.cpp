#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char num[100];
	while (~scanf("%s", num)){
		int len = strlen(num);
		for (int i = 0; i < len; ++i){
			printf("%c ",num[i]);
		}
		printf("\n");
	}
}