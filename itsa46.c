#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){
        char op;
        int a1, b1, a2, b2;
        scanf(" %c %d %d %d %d", &op, &a1, &b1, &a2, &b2);
        if(op == '+'){
            printf("%d %d\n", a1 + a2, b1 + b2);
        }
        else if(op == '-'){
            printf("%d %d\n", a1 - a2, b1 - b2);
        }
        else if(op == '*'){
            int a, b;
            a = a1 * a2 - b1 * b2;
            b = a1 * b2 + a2 * b1;
            printf("%d %d\n", a, b);
        }
    }
}
