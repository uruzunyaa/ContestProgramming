#include <stdio.h>
int main(){
    //intの最大値
    long long inf = 2147483647;
    int test[inf+1];
    test[inf]=1;
    int test2[inf+1];
    test2[inf]=2;
    printf("%d",test[inf]);
    printf("%d",test2[inf]);
}