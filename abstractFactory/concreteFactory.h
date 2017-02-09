#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "factory.h"
#include "concreteProduct.h"

class ConcreteFactory : public Factory{

public:
	ConcreteFactory();
	~ConcreteFactory();

	virtual Product* createProduct();
};

#endif
