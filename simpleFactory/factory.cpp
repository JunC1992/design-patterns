#include "factory.h"
#include "testA.h"
#include "testB.h"

Factory::Factory(){}
Factory::~Factory(){}

Product::Product(){}
Product::~Product(){}

void Product::baseinfo(){
	cout<<"base"<<endl;
}

Product* Factory::createProduct(string pname){
	if("A" == pname)
		return new testA();
	if("B" == pname)
		return new testB();
	return NULL;
}
