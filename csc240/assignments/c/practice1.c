#include<stdio.h>
#include<string.h>

//1
int triple_it(int x)
{
return (x * 3);
}
//3
int array_max(int a[], int len)
{
int max = a[0];

for(int i = 1; i <= len; i++)
if(a[i] > max)
max = a[i];

return max;
}

//4
int letter_count(char a[], int len)
{ int count = 0;

for (int i = 0; i <= len; i++)
{
	count++;
}
return count;
}

//5
void printThem(int count)
{

for(int i = 1; i <= count; i++)
{
 	if (i == 3)
            {
                char three[] = "three";
                printf("%s", three);
                
            }
            else if (i == 5)
            {
                
                char five[] = "five";
                printf("%s", five);
                
            }
            else if (i % 7 == 0)
            {
               printf(" ");
            }
            else if( i %  3== 0 && i % 5 == 0)
            {
                char fifteen[] = "fifteen ";
                printf("%s", fifteen);
                
            }
            else
            {
                printf("%d", i);
            }
	printf(", ");
        }
return;
}




int main(void) {
  int nums[11] = {1, 3, 5, 7, 9, 11, 10, 8, 6, 4, 2};
  char str[] = "CSC240 Fall 2019";

  printf("triple_it: ");
  for(int ii=0;ii<10;ii++) { 
    printf("%d ", triple_it(ii));
  }
  printf("\n");

  printf("\narray_max: %d\n", array_max(nums, 11));

  printf("\nletter_count: %d\n", letter_count(str, strlen(str)));

  printf("\nprintThem:\n");
  printThem(50);

  return 0;
}


