#include<iostream>

/*
//static memory
void test(){
static int m = 0;
}
//stack memory
int num(int n){
int ret = n;
return(ret);
}
//heap memory
class heap_cpp {
	int num;
};

*/


//global variables allocated in stack mem

//part 2
using namespace std;
 
int main()
{
    int num = 10;
    int * pnum;
	pnum = &num;	//pointer to num
    int& ref = num; 
    cout << "~~~~Test~~~~ " << endl;
    cout << "num = " << num << endl;
    cout << "*num = " << *pnum << endl;
    cout << "&ref = " << ref << endl;
    return 0;
}


/*
code that declares a pointer to num
code that declares a reference to num
copy output
*/
