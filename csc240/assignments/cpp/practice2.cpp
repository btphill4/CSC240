#include<iostream>


using namespace std;


class DynamicArray
{


private:

int size; 
int *arr;


public:

DynamicArray()
{
size = 10;
arr = new int[size];
}

DynamicArray(int m)
{
size = m;
arr = new int[size];
}

~DynamicArray()
{
delete arr;
}


void fill_array(int n)
{
for(int i = 0; i <= size; i++)
	{
	arr[i] = i;
	}
}

void print_array()
{
cout << "Array Size is: " << size << endl; 
for(int i = 0; i<= size; i++)
	{
	cout << " [" << i << "]" ; 
	}
	cout << endl;
}

};

int main()
{
    DynamicArray a(49);
    a.fill_array(1);   /* fills array with consecutive #’s */
    a.print_array(); 

return 0;
}





