#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        printf("%.1f\n", x * 1.6);
    }
}
