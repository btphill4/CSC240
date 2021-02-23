#include<stdio.h> 
#include<stdlib.h>

int main(void) {
 int num = 6; /* integer */
 int * ptr; /*pointer to an integer (or int pointer) */
 char * cptr; /* character pointer */
 char str[] = "123456789";
 int * aptr;

/* & : reference operator - returns the address */
/* * : dereference operator - returns an alias */

ptr = &num;
printf("num = %d, %p, %lu\n", num, (void *) &num, sizeof(num));
printf("num = %d, %p, %lu, *ptr =%d\n", (void *) ptr, (void *) &ptr, sizeof(ptr), *ptr); 


/* *ptr as an alias num */
*ptr = 20;
printf("\n*ptr = 20;\n");
printf("num = %d, %p, %lu\n", num (void *) &num, sizeof(num));
printf("ptr = %p, %p, %lu", "ptr =%d \n", (void *) ptr,(void *) &ptr, sizeof(ptr), *ptr);

}
