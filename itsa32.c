#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num;
    while(scanf(" %d", &num) != EOF){
        int x, y, z, sum;
        x = num / 100;
        num = num % 100;
        y = num / 10;
        z = num % 10;
        sum = x * x * x + y * y * y + z * z * z;
        num = 100 * x + 10 * y + z;
        if(num == sum){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}
