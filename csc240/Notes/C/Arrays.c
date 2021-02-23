#include<stdio.h> 

int main(void) {

/* initializing array declarations */
	
	int a[4] = {1, 2, 3, 4};
	double b[2] = {2.4, 3.14, 9.999999};

	unsigned int ii;

	for (ii = 0; ii<6; ii++)
	{ 
	  printf(*a[%d]=%d\n, ii, a[ii]);
	}
	printf("Test");

  /*strings*/
  char str1[] = "Hello"; 
  char str2[] = {'W', 'o', 'r', 'l', 'd'};
  char str3[] = {"e", "n", "d",'\0'} ;
  
printf("Str1: %s \t %lu\n", str1, sizeof(str1));	
printf("Str1: %s \t %lu\n", str2, sizeof(str2));	
printf("Str1: %s \t %lu\n", str3, sizeof(str3));

   return 0;

}
