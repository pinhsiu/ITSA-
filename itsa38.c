#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y, z;
    while(scanf(" %d %d %d", &x, &y, &z) != EOF){
        int yes = 1;

        if(x + y <= z) yes = 0;
        if(x + z <= y) yes = 0;
        if(y + z <= x) yes = 0;

        if(yes == 1) printf("fit\n");
        else printf("unfit\n");
    }
}
