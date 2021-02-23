#include<iostream>

using namespace std;


//-----------------MyClass Begin---------------//

class MyClass {
private:
	int a;
public:
MyClass(int x=0) 
{
a = x;
}

void print() 
{
cout << " Printing: " << a << endl;
}

 MyClass operator+(const MyClass& that);


//friend can see private members
friend ostream& operator<<(ostream& strm, const MyClass& m); 
};

MyClass MyClass::operator+(const MyClass& that){
MyClass ret(this -> a + that.a);
return ret;
}


//-----------end of MyClass---------//

//this method only works because of friend modifier
ostream& operator<<(ostream& strm, const MyClass& m)
{
strm << "[" << m.a << "]";
return strm;
}

int main()
{

MyClass c1(1);
MyClass c2(2);
MyClass result;

c1.print();
c2.print();

result = c1 + c2; 
result.print();





}
