#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float x, y;
    while(scanf(" %f", &x) != EOF){
        y = (x * 9 / 5) + 32;
        if(y - (int)y == 0) printf("%.f\n", y);
        else printf("%.1f\n", y);
    }
}
