#ifndef BUILDER_H
#define BUILDER_H
#include"product.h"
class Builder{

public:
	Builder();
	~Builder();

	virtual void setInstance(Product* prod)=0;
};
#endif
