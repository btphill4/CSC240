#ifndef TERM_HPP
#define TERM

#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>


using namespace std;

class Term
{

private: 
int coef;
string var;
int exp;



public: 
//constructors
Term();
Term(int, string, int);

//getters
int getCoef();
string getVar();
int getExp();

//setters
void setCoef(int);
void setVar(string);
void setExp(int);

//print
string toString();


~Term(){
}

}; 

#endif 





