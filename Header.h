#pragma once
#include<stdio.h>
#include<iostream>
using namespace std;

class Calculation {
public:
	Calculation();
	int add(int a, int b);

	int sub(int a, int b);
	int multi(int a, int b);
};
Calculation::Calculation(){}
int Calculation::add (int a, int b){
	return a+b;
}
int Calculation::sub(int a, int b){
	return a-b;
}
int Calculation::multi(int a, int b) {
	return a*b ; 
} 
