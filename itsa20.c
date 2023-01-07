#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    while(scanf(" %d", &n) != EOF){
        int ans[100];
        int cnt = 0;
        while(n != 0){
            ans[cnt] = n % 16;
            n = n / 16;
            cnt++;
        }
        for(int i = cnt - 1; i >= 0; i--){
            if(ans[i] == 10){
                printf("A");
            }
            else if(ans[i] == 11){
                printf("B");
            }
            else if(ans[i] == 12){
                printf("C");
            }
            else if(ans[i] ==13){
                printf("D");
            }
            else if(ans[i] == 14){
                printf("E");
            }
            else if(ans[i] == 15){
                printf("F");
            }
            else{
                printf("%d", ans[i]);
            }
        }
        printf("\n");
    }
}
