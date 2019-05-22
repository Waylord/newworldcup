#include "functions.h"
#include <stdio.h>

int fat(int v){
    int i = 1;
    for(v; v > 1; v--){
        i *= v;
    }
    return i;
}

