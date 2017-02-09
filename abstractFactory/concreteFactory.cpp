#include "concreteFactory.h"

ConcreteFactory::ConcreteFactory(){}
ConcreteFactory::~ConcreteFactory(){}

Product* ConcreteFactory::createProduct(){

	return new ConcreteProduct();
}
