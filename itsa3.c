#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    while(scanf(" %d %d", &x, &y) != EOF){
        printf("%d\n", x + y);
    }
}
