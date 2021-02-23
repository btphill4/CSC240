#include<iostream>
#include<vector>
#include<algorithm>
#include "term.hpp"


using namespace std;

class Polynomial{
private: 
vector<Term> poly;


public:
Polynomial(){
}

void add(Term t)
{
poly.push_back(t);
}

void print()
{
/*
for(Term i = poly.begin(); i != poly.end(); i++)
{
    std::ostream  << i << endl;
}
*/
/*
for (int ii = 0; i < poly.size(); ii++)
	{
		cout << p.coef.at(i) << "x^" << p.expon.at(i);
		if (i != p.totall() - 1)
			cout << "+";
	}
*/
 
for(Term ii: poly) 
{
	cout << ii  << " ";
}

/*
for(int i = 0; i<= poly.size(); i++)
    {
    cout << " [" << i << "] " << endl;
    }

}
*/
}




Polynomial combineLikeTerms()
{
//answer
Polynomial combined;
map<int, int> newPolyvals;
string var;

for (int ii = 0; ii<terms.size(); ii++)
{
int coef = terms[ii].getCoef();
var = terms[ii].getVar();
int exp = term[ii].getExp();
if(newPolyvals.find(exp) == newPolyvals.end() )
{
newPolyvals.insert(pair<int, int>(exp, coef));
}
else {
newPolyvals[exp] += coef;
}

}

map<int,int>::iterator itr;
for(itr = newPolyvals.begin(); itr != newPolyvals.end(); itr++)
{
int exp = itr -> first;
int coef = itr -> second;
combine.add(Term(coef, var, exp));
}
return combined;
}	//end combineLikeTerms()




};

ostream operator<<(ostream& o, const Polynomial& poly) {
  for (int ii = 0; i < poly.size(); i++){
	if(ii) {
		o << " + ";
		  }
	o << poly[ii];
	}
	return 0;
}



