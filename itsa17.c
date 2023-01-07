#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x == 0 || y == 0){
        printf("0\n");
    }
    else{
        while(x > 0 && y > 0){
            if(x > y){
                x = x % y;
            }
            else{
                y = y % x;
            }
        }

        if(x == 0) printf("%d\n", y);
        else printf("%d\n", x);
    }
}
