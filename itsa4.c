#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d+%d=%d\n", x, y, x + y);
    printf("%d*%d=%d\n", x, y, x * y);
    printf("%d-%d=%d\n", x, y, x - y);

    if(x < 0 && y < 0){
        printf("%d/%d=%d...%d\n", x, y, (x / y) + 1,  x % y - y);
    }
    else if(x < 0 && y > 0){
        printf("%d/%d=%d...%d\n", x, y, (x / y) - 1, x % y + y);
    }
    else{
        printf("%d/%d=%d...%d\n", x, y, x / y, x % y);
    }
}
