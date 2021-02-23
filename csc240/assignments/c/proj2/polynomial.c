#include <stdio.h>
#include <stdlib.h>
#include"polynomial.h"
#include "basiclist.c"
#include "term.c"

char * cptr;
poly_t * head;
 

poly_t * new_polynomial() 
{
poly_t * head  = null;
head = malloc(sizeof(poly_t));
return head;

/*
poly_t new_poly;
mew
*/
}

void add_to_polynomial(poly_t * poly, const term_t * term)
{
list_add(head, &term);
}

void print_polynomial(const poly_t * poly)
{
// term_to_string(&poly);	wrong

node_t * curr;
term_t *tjos_term;
curr = poly -> terms;

//not finished 
while(curr != NULL)
{
this_term = (term_t *) curr -> data;
printf(


}
}

void * delete_polynomial(poly_t ** poly)
{
free(head);
}


/*
poly_t * combine_like_terms(const poly_t * poly)
{
poly_t * new_poly;
node_t * curr;
term_t * this_term;
int ii = 0;
int max_exp = 0;

curr = poly->terms;

new poly = new_polynomial();
while(curr != NULL)
{
this_term = (term_t *) term;
}
return 0;
}
*/




