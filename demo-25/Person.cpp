#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(): Animal(100, 200)
{

}

void Person::breathe()
{
	cout << "Person breathe" << endl;
}