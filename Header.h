#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

class Calculation {
public:
	Calculation();
	int add(int a, int b);
};
Calculation::Calculation(){}
int Calculation::add (int a, int b){
	return a+b;
}

