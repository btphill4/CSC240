#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include "term.hpp"

using namespace std;




//constructors
Term::Term()
{
setCoef(0);
setVar("x");
setExp(0);		//default output 0x^0
}

Term::Term(int c, string v, int e)
{
setCoef(c); 
setVar(v);
setExp(e);
}

//getters
int Term::getCoef()
{
return this -> coef;
}

string Term::getVar()
{

return this -> var;
}

int Term::getExp()
{
return this -> exp;
}

//setters
void Term::setCoef(int x)
{
this -> coef = x;
}

void Term::setVar(string y)
{
this -> var = y;
}

void Term::setExp(int z)
{
this -> exp = z;
}

string Term:: toString()
{

string term1 = std::to_string(getCoef()) + getVar() + std::to_string(getExp());
return term1;
}









