#ifndef FACTORY_H
#define FACTORY_H

class Product{

public:
	Product();
	~Product();
	
	virtual void use();
};

class Factory{

public:
	Factory();
	~Factory();

	virtual Product * factoryMethod()=0;
};

#endif
