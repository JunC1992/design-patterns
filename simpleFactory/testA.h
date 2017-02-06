#ifndef TESTA_H
#define TESTA_H

#include"factory.h"

class testA : public Product{

public:
	testA();
	~testA();
	virtual void baseinfo();
};

#endif
