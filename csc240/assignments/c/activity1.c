#include<stdio.h> 

	int main()
	{ 
		int n, i;
		int array[10];
		

		printf("Enter a number less than 10\n"); 
		scanf("%d", &n);
		printf("Your number: %d \n" , n);

		for(i = 0; i < n; i++)
		{
		printf("Enter a number \n");
		scanf("%d", &array[i]);	
		}
		for(i = 0; i < n; i++)
		{
		if(array[i] % 2 == 0)
		{
		  printf("%d ", array[i]);
		}
		}
		
		return 0;
	}
