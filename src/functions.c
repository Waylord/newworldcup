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

//calculates the combination of two numbers using fatorial function
int combin(int n){
    int k = 2;
    result = fat(n) / (fat(k) * fat(n - k));
    return result;
}

//register the teams on program
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
    
    strcpy(team_name[line],"TBD");
    line = 0;
    
    for(int i = 0; i < teams; i++){
        for(int j = 0; j < teams; j++){
            if(i / (teams/groups) == j / (teams/groups)){
                result_group_matches[line].princ = i;
                result_group_matches[line].visit = j;
                result_group_matches[line].score_princ = -1;
                result_group_matches[line].score_visit = -1;
                line++;
            }
        }
    }
    return 1;
}

//Creates the group tables
void group_tables(char team_name[][4], score result_group_matches[], int group_matches){
    
}
