#include<iostream>
#include<vector>

using namespace std;



class NumberList{
private:
int size;
std::vector<int> v;


public:
NumberList(unsigned int x=10)
{
size = x;
}

void add(int x=10)
{
if(v.size() >= size)
{
cout << "Vector is full" << endl;
}
else
{
v.push_back(x);
}

}

void print_list()
{
for(auto ii : v)
{
cout<< ii << ", ";
}

}

virtual ~NumberList(){
}

};


int main(){
int x;
cout << "What size do you want the list?" << endl;
cin >> x;
NumberList n1(x);

n1.add(7);
n1.add(5);
n1.add(1);
n1.add(3);

n1.print_list();


}

//solution




