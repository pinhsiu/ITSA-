#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    while(scanf(" %d", &x) != EOF){
        for(int i = x - 1; i >= 2; i--){
            int prime = 1;

            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    prime = 0;
                    break;
                }
            }

            if(prime == 1){
                printf("%d\n", i);
                break;
            }
        }
    }
}
