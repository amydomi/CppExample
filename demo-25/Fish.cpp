#include "Fish.h"
#include <iostream>

using namespace std;

Fish::Fish(): Animal(100, 200)
{

}

void Fish::breathe()
{
	cout << "Fish breathe" << endl;
}