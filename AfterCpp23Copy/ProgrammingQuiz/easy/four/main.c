//初級問題4,C言語
#include<stdio.h>
int main(){
	int n = 16;
	int i = 1;
	while(1){
		i*=2;
		printf("%d ",i);
		if(n==i)break;
	}
}
