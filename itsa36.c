#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        if(3 <= x && x <= 5) printf("Spring\n");
        else if(6 <= x && x <= 8) printf("Summer\n");
        else if(9 <= x && x <= 11) printf("Autumn\n");
        else printf("Winter\n");
    }
}
