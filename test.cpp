#include <iostream>

using namespace std;
int sum;




int func1(int x)
{
sum = x*x;
return sum;
}

int func2(int a[])
{
for(unsigned int ii = 0; ii < sizeof(a); ii++)
{
sum = sum + func1(a[ii]);
return sum;
}
return 0;
}

int func3(int x, int y)
{
if( x > y)
	{
	sum = x - y;
	}
else
	{
	sum = y - x;
	}
}

int f(int x)
{
if (x == 0)
{
sum += 1; 
return sum;
}
else if(x==1)
{
sum += 1; 
return sum;
}
else
{
sum += (x * x) * f(x - 1);
}

}


int main()
{
int x = 10;
int y = 14;
int z[] = {1,2,3,4};
int a = 2;

std::cout << "F: " << f(a) << endl;
/*
std::cout << "Func1: " << func1(x) << endl;

std::cout << "Func2: " << func2(z[]) << endl;

std::cout << "Func3: " << func3(x, y) << endl;
*/


}
