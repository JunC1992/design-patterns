#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H
#include "builder.h"
class ConcreteBuilder : public Builder{

public:
	ConcreteBuilder();
	~ConcreteBuilder();

	virtual void setInstance(Product* prod);
};

#endif
