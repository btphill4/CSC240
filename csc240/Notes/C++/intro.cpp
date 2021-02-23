#include<iostream>
#include<string>

using namespace std;

int main() {

	int count;
	string str;

	
	cout << "Enter a number: ";
	cin>> count;
	
	cout << "Enter a string: ";
	cin>> str;
	
	for(int ii= 0; ii< count; ii++)
	{
	cout << ii+1 << " : " << str <<endl;
	}

	//Clear stdin to read until new line
	getline(cin,str);

	cout << endl;
	cout << "Enter a string"; 
	getline(cin, str);

	for(int ii= 0; ii< count; ii++)
	{
	cout << ii+1 << " : " << str <<endl;
	}



return 0;

}
