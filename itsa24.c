#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        double ans;
        if(x <= 60){
            ans = x * y;
        }
        else if(x > 60 && x <= 120){
            x = x - 60;
            ans = 60 * y + x * y * 1.33;
        }
        else{
            x = x - 120;
            ans = 60 * y + 60 * y * 1.33 + x * y * 1.66;
        }
        printf("%.1f\n", ans);
    }
}
