#ifndef DIRECTOR_h
#define DIRECTOR_H
#include "concreteBuilder.h"
class Director{

public:
	Director();
	~Director();

	Builder* generateInst(void);
};
#endif
