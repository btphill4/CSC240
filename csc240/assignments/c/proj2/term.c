#include <stdio.h>
#include <stdlib.h>
#include"term.h"

char * cptr;

char * term_to_string(const term_t * term)
{
cptr = (char *) malloc(sizeof(term) + 2); 
sprintf(cptr, "{%d, %s, %d} ", term->co, term->x, term->exp);

return cptr;
}



/*
int main() {

    term_t testterm1 = {1, 'x', 0};
    term_t testterm2 = {2, 'x', 1};
    term_t testterm3 = {3, 'x', 2};

    printf("Testing term.c/h:\n");
    printf("testterm1: %s\n", term_to_string(&testterm1));
    printf("testterm2: %s\n", term_to_string(&testterm2));
    printf("testterm3: %s\n", term_to_string(&testterm3));

	return 0;
} 

*/
