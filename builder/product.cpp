#include<iostream>
#include"product.h"

Product::Product(){}
Product::~Product(){}

void Product::setPartA(){
	vs.push_back("AAAA");
}
void Product::setPartB(){
	vs.push_back("BBBB");
}
void Product::setPartC(){
	vs.push_back("CCCC");
}

void Product::getParts(){

	std::vector<std::string>::iterator itv;
	for(itv = vs.begin(); itv!=vs.end(); itv++)
		std::cout<< itv->c_str() <<std::endl;
}
