#ifndef TESTB_H
#define TESTB_H

#include"factory.h"

class testB : public Product{

public:
	testB();
	~testB();
	
	virtual void baseinfo();
};

#endif
