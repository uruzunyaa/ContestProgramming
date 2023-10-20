//中級問題3,C言語
#include <stdio.h>
int main() {
    long long a[10];
    a[0] = 9;
    for (int i = 1; i < 10; i++) {
        a[i] = a[i - 1] * 10 + (9 - i);
    }
    printf("%lld\n", a[9]);
    return 0;
}
