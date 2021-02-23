#ifndef TERM_H_
#define TERM_H_

typedef struct {
int co;
char x;
int exp;
}term_t;

char * term_to_string(const term_t * term);

#endif
