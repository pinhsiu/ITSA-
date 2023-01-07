#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        if(x % 4 == 0){
            if(x % 100 == 0 && x % 400 != 0){
                printf("Common Year\n");
            }
            else{
                printf("Bissextile Year\n");
            }
        }
        else{
            printf("Common Year\n");
        }
    }
}
