#include<stdio.h> 

int main()
{


  char * cptr = 0x100;
  int * iptr = 0x100;
  printf ("cptr = %p,  iptr = %p\n", cptr, iptr);
  printf ("cptr = %p,  iptr = %p\n", cptr+10, iptr+10);
  cptr++; 
  iptr++;
  printf ("cptr = %p,  iptr = %p\n", cptr, iptr);


}
