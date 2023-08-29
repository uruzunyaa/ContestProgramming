#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 0; i < 15; i++) {
        long long n = (long long)pow(10, i);
        printf("%lld\n", n);
    }
    return 0;
}
