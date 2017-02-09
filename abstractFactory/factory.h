#ifndef FACTORY_H
#define FACTORY_H
#include "product.h"
class Factory{

public:
	Factory();
	~Factory();

	virtual Product* createProduct()=0;
};
#endif
