#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int hour, minute;
    if(m2 >= m1){
        hour = h2 - h1;
        minute = m2 - m1;
    }
    else{
        hour = h2 - h1 - 1;
        minute = 60 + m2 - m1;
    }

    int time;
    time = hour * 2;
    if(minute >= 30) time = time + 1;

    int ans;
    if(time < 4){
        ans = time * 30;
    }
    else{
        ans = 4 * 30;
        if(time < 8){
            ans = ans + (time - 4) * 40;
        }
        else{
            ans = ans + 4 * 40 + (time - 8) * 60;
        }
    }
    printf("%d\n", ans);

}
