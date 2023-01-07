#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, y;
    scanf("%d", &x);

    y = x / 86400;
    printf("%d days\n", y);

    x = x % 86400;
    y = x / 3600;
    printf("%d hours\n", y);

    x = x % 3600;
    y = x / 60;
    printf("%d minutes\n", y);

    x = x % 60;
    printf("%d seconds\n", x);
}
