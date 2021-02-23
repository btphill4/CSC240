#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL

#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include"term.hpp"

using namespace std;

class Polynomial{
private: 
vector<Term> poly;

public:
polynomial();

void add(Term t);
void print();

Polynomial combineLikeTerms();

};


#endif
