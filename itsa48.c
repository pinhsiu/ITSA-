#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f91(int n){
    if(n <= 100){
        int x;
        x = f91(n + 11);
        return f91(x);
    }
    else{
        return n - 10;
    }
}

int main(){
    int k;
    scanf(" %d", &k);

    int n;
    for(int i = 0; i < k; i++){
        scanf(" %d", &n);
        printf("%d\n", f91(n));
    }
}
