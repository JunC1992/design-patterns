#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H
#include "factory.h"

class ConcreteFactory : public Factory{

public:
	ConcreteFactory();
	~ConcreteFactory();
	
	virtual Product * factoryMethod(); 
};

#endif
