#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Rewrite using a pointer to char str[] */
/*
void array_to_ptr () {
  int n=0, len; 
  char str[ ] = "Hello World!";
  len = strlen(str);
  for( n=0; n<len; n++) {
    putc(str[n], stdout);
  }
  printf("\nlength = %d\n", n);
}
*/

/* Problems 2 rewritten */

void array_to_ptr () {
  int n=0, len = 0;
  char str[ ] = "Hello World!";
	char ptr;
len = sizeof(str); 
 for (n = 0; n < len; n++)
   {
	ptr = str[n];
	printf("%c" , ptr);	
   } 
  printf("\nlength = %d\n", len);
}

/* Problem 3*/
/*
int contains (char * str, char c)
{
 char string = str;
 char test = c; 
 char * str = strstr(str, test)

}
*/

int * makearray(int n)
{
int * aptr; 
aptr = (int *) malloc(n * sizeof(arr));
	for(int x = 0; x < n; x++)
	{
	*(aptr+x) = x * n; 
	}
printf("aptr = ");
	for(int x = 0; x < n; x++)
	{
	printf("[%d] ", *(aptr+n));
	}

/*	for(int x = 1; x < n; x++)
	{
	 arr[x] = n;
	ptr = arr[x];
	printf("%d" , ptr);
	} */
	return 0;  
}

int main (void) {
  printf("Question #2 - array_to_ptr:\n");
  array_to_ptr();   
  printf("\n------------------------------------\n\n");

/*
  printf("Question #3 - contains:\n");
  printf("Test #1: ");
  if ( contains("Hello", 'e') == 1) {
    printf("The string \"Hello\" contains the character 'e'\n");
  }
  else {
    printf("The string \"Hello\" does not contain the character 'e'\n");
  }
  printf("Test #2: ");
  if ( contains("Hello", 'x') == 1) {
    printf("The string \"Hello\" contains the character 'x'\n");
  }
  else {
    printf("The string \"Hello\" does not contain the character 'x'\n");
  }
 printf("\n------------------------------------\n\n");
*/
 printf("Question #4: - makearray:\n");
  int * arr = makearray(10);
  for (int ii=0;ii<10;ii++) {
    printf("%d ", *(arr+ii));
  }
  printf("\n");
  printf("\n------------------------------------\n\n");
  return 0;
}


