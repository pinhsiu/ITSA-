#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    long long int ans;

    while(scanf(" %d", &x) != EOF){
        printf("%d ", x);
        ans = x * x;
        printf("%lld ", ans);
        ans = ans * x;
        printf("%lld\n", ans);
    }
}
