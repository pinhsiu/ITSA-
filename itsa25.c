#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;
    while(scanf(" %d", &N) != EOF){
        int ans = 0;
        for(int i = 1; i <= N; i++){
            if(i % 3 == 0){
                ans = ans + i;
            }
        }
        printf("%d\n", ans);
    }
}
