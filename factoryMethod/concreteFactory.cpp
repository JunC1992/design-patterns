#include "concreteFactory.h"
#include "concreteProduct.h"

ConcreteFactory::ConcreteFactory(){}
ConcreteFactory::~ConcreteFactory(){}

Product* ConcreteFactory::factoryMethod(){
	return new ConcreteProduct();
}
