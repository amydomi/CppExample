#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal(int height, int weight)
{
	this->height = height;
	this->weight = weight;
}

void Animal::eat()
{
	cout << "Animal eat" << endl;
}

void Animal::breathe()
{
	cout << "Animal breathe" << endl;
}