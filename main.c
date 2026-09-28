#include <stdio.h>

int main() {

    unsigned long long N = 0;
    if(scanf("%llu", &N) != 1) {
        printf("Error. Valid range [0 ; 2^64 - 1]\n");
        return 1;
    }

    size_t counter = 0;
    int ch; // clean buffer after possible wrong user's input
    while((ch = getchar()) && ch != '\n' && ch != EOF) {
        ++counter;
    }
    printf("%lu characters after syccessfull read a number\n", counter);
    
    return 0;
}