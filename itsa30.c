#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int x;
    while(scanf(" %d", &x) != EOF){
        if(x == 1){
            printf("NO\n");
        }
        else{
            int prime = 1;
            for(int i = 2; i < x; i++){
                if(x % i == 0){
                    prime = 0;
                    break;
                }
            }
            if(prime == 1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }

}
