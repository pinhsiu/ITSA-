#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    while(scanf(" %d", &n) != EOF){
        long long int ans = 1;
        for(int i = 1; i <= n; i++){
            ans = ans * i;
        }
        printf("%lld\n", ans);
    }
}
