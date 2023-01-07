#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N;
    while(scanf(" %d", &N) != EOF){
        for(int i = 35; i <= N; i = i + 35){
            if(35 * (N / 35) == i) printf("%d\n", i);
            else printf("%d ", i);
        }
    }
}
