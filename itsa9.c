#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int ans = 1;

    while(scanf(" %d", &i) != EOF){
        if(i > 31){
            printf("Value of more than 31\n");
        }
        else{
            for(int cnt = 1; cnt <= i; cnt++){
                ans = ans * 2;
            }
            printf("%d\n", ans);
        }
    }
}
