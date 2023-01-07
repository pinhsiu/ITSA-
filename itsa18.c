#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        int ans[8] = {0};
        int cnt = 7;
        int neg = 0;
        if(x < 0){
            x = x + 256;
        }
        while(x != 0){
            ans[cnt] = x % 2;
            x = x / 2;
            cnt--;
        }

        for(int i = 0; i < 8; i++){
            printf("%d", ans[i]);
        }
        printf("\n");
    }
}
