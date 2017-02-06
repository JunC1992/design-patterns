#include<iostream>
#include"factory.h"

int main(){

	string a = "B";
	Product * p;
	p = Factory::createProduct(a);
	if (NULL != p)
		p->baseinfo();
	return 0;
}
