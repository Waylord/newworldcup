#include "../include/functions.h"
#include <stdio.h>

//calculates the fatorial of a number
int fat(int n){
    int i = 1;
    for(n; n > 1; n--){
        i *= n;
    }
    return i;
}

//the combinations will always be assumed k = 2, beacuse only two teams play the matches.
int combin(int n){
    int result = fat(n) / (fat(2) * fat(n - 2));
    return result;
}

