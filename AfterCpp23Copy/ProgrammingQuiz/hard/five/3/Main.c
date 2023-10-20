//上級問題5,選択肢3,C言語
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = 1;
    for(int i=0;i<b;i++)ans*=a;
    printf("%d\n", ans);
    return 0;
}
