#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H
#include "product.h"
class ConcreteProduct : public Product{

public:
	ConcreteProduct();
	~ConcreteProduct();

	virtual void use();
};
#endif
