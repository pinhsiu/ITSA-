#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        float ans;
        ans = x * 0.9;

        if(800 < x && x< 1500){
            ans = ans * 0.9;
        }
        else if(x >= 1500){
            ans = ans * 0.79;
        }

        printf("%.1f\n", ans);
    }
}
