#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//template<typename T> void printVector(vector<T> vec, string name="");

class Grades{
private:
	int avg;
	int sum;
	std::vector<int> a;
	int size;

public:
	Grades()
	{

	}
	Grades(std::vector<int> g1) : a(g1)
	{
	}
	

	void add(int x)
	{
	a.push_back(x);
	size++;
	}

	void print()
	{
	//average
	for(unsigned int i = 0; i <= a.size(); i++)	
		{
		sum += (a.front() + 1);
		avg = sum / a.size();
		}

	for(unsigned int i = 0; i < a.size(); i++)
		{
		cout<< "Grades: " << (a.front() + i) << + ", "; 
		}
	//	cout << "Average = " << avg << endl;
	}
	
};

int main()
{

Grades();
x.add(80);
x.add(88);
x.add(75);
x.add(90);
x.add(83);

x.print();

}





