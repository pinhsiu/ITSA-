#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    printf("NT10=%d\n", N / 10);
    N = N - (N / 10) * 10;
    printf("NT5=%d\n", N / 5);
    N = N - (N / 5) * 5;
    printf("NT1=%d\n", N);
}
