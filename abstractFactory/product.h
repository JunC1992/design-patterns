#ifndef PRODUCT_H
#define PRODUCT_H

class Product{

public:
	Product();
	~Product();
	
	virtual void use()=0;
};
#endif
