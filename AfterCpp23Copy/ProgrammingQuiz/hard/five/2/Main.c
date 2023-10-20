//上級問題5,選択肢2,C言語
#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = (int)(pow(a,b)+0.0001);
    printf("%d\n", ans);
    return 0;
}
