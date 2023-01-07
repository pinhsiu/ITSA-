#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    while(scanf(" %d", &N) != EOF){
        int sum = 0;
        for(int i = 1; i <= N; i++){
            if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0){
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
}
