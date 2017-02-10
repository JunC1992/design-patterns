#include "concreteBuilder.h"

ConcreteBuilder::ConcreteBuilder(){}
ConcreteBuilder::~ConcreteBuilder(){}

void ConcreteBuilder::setInstance(Product* prod){

	prod->setPartA();
	prod->setPartB();
}
