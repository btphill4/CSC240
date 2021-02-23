#include<iostream>      //always include
using namespace std;    //always include

class MyClass {
  private:
    int num;
  public:
    MyClass(int x=0) {
      num = x;
    }
    int doubleNum(){    // Returns num times 2
	return num * 2;
}
    void print(){       // Prints num
  	cout << "Num =  " << num << endl;
}
};

