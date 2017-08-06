#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(int height, int weight);
	void eat();
	virtual void breathe();
private:
	int height;
	int weight;
};

#endif