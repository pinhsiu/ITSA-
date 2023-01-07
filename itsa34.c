#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        for(int i = 1; i <= x; i++){
            if(i == x){
                printf("%d\n", i);
                break;
            }
            if(x % i == 0){
                printf("%d ", i);
            }
        }
    }
}
