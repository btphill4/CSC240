#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Grades {
private: 
vector<int> scores;

public:
Grades(){
}

void add(int x)
{
    scores.push_back(x);
}

double computeAverage()
{
    double sum = 0.0;
        for(auto& ii: scores) 
        {
        sum += ii;
        }
    return sum / (double) scores.size();
}
void print()
{
    for(auto& ii: scores) {
    cout << ii << " ";
    }
cout << " Avg: " << computeAverage() << endl;

}

} //end class


int main() {
Grades myGrades;

myGrades.add(100);
myGrades.add(90);
myGrades.add(80);
myGrades.add(87);
myGrades.add(93);

myGrades.print();

return 0;
}
