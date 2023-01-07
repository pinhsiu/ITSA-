#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    while(scanf(" %d %d", &x, &y) != EOF){
        if(x > y){
            int temp;
            temp = x;
            x = y;
            y = temp;
        }

        int ans = 0;
        for(int i = x; i <= y; i++){
            ans = ans + i;
        }
        printf("%d\n", ans);
    }
}
