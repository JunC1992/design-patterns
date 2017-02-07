#include "factory.h"
#include<iostream>

Factory::Factory(){}
Factory::~Factory(){}

Product::Product(){}
Product::~Product(){}
void Product::use(){

	std::cout<<"base"<<std::endl;
}
