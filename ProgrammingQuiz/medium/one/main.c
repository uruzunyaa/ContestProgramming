//中級問題1,C言語
#include<stdio.h>
int main(){
	int n = 6;
	for(int i=0;i<n;i++){
		if(i%3==1)continue;
		printf("%d ",i);
	}
}
