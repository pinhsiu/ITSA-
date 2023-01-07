#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    int ans[1000];
    int cnt = 0;
    scanf(" %d", &n);
    for(int i = 6; i <= n; i++){
        int sum = 0;
        for(int x = 1; x < i; x++){
            if(i % x == 0){
                sum += x;
            }
        }
        if(sum == i){
            ans[cnt] = i;
            cnt++;
        }
    }
    for(int j = 0; j < cnt - 1; j++){
        printf("%d ", ans[j]);
    }
    printf("%d\n", ans[cnt - 1]);
}
