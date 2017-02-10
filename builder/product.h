#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
class Product{

public:
	Product();
	~Product();

	void setPartA();
	void setPartB();
	void setPartC();

	void getParts();
private:
	std::vector<std::string> vs;
};

#endif
