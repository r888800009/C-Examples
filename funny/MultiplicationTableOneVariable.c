#include <stdio.h>
int main(){
    for(int i = 0 ; i < 81 ; i++)
        printf("%d*%d=%d", i % 9 +1, i / 9 + 1, (i % 9 +1) * ( i / 9 + 1));
    return 0;
}