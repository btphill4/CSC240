#include <stdio.h>


define LEN 10

struct point {
double x;
double y;
}

int main() {
void *things[4];

things[0] = malloc(sizeof(int));
things[1] = malloc(sizeof(double));
things[2] = malloc(sizeof(char) * LEN);
things[3] = malloc(sizeof(struct point));

 *(int *) things[0] = 10;
 *(double *)things[1] = 3.24;
 strncpy(char *)things[2], "Excerise", LEN);
 ((struct point *) things[3]) -> x = 4;
 ((struct point *) things[3]) -> y = -7;
