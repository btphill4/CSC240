#include<stdio.h> 

#define NUM 10 	/* Macro / symbolic constant */

typedef enum {ONE, TEN =10, TWENTY=20} numbers_t;


int main(void) {

	int my_int = 30;
	const int my_constant = NUM * 2;
	int i = NUM;
	int *j;
	int * sneaky_ptr;
	numbers_t k = TWENTY;
	const int *p;

	printf("my int= %d", my_int);
	printf("my_constant= %d", my_constant);
 	printf("i= %d", i);
	printf("*j= %d", *j);
	printf("TWENTY= %d", TWENTY);

}
