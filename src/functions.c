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

int combin(int n){
    int k = 2;
    result = fat(n) / (fat(k) * fat(n - k));
    return result;
}

void register(char team_name[][4], score result_group_matches[]){
    char ans;
    int line = 0, i = 0; j = 0;
    for(i; i < groups; i++){
        for(j; j < teams/groups; j++){
            printf("Insert the acronym of the selection %d of group %c: ", (j + 1), (i + 65));
            scanf("%s", team_name[line]);
            line++;
        }
    }
    
}
