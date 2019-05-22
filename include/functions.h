#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct score{
    int princ;
    int visit;
    int score_princ;
    int score_visit;
    int pen_princ;
    int pen_visit;
}score;

const int teams = 48;
const int groups = 16;

int fat(int v);
int combin(int k);

#endif
