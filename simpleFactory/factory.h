#ifndef FACTORY_H
#define FACTORY_H
#include<iostream>
#include <string>

using namespace std;
class Product{

public:
	Product();
	~Product();
	
	virtual void baseinfo();
};

class Factory{

public:
	Factory();
	~Factory();
	
	static Product* createProduct(string pname);
};

#endif
