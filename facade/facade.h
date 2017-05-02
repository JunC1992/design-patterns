#ifndef FACADE_H
#define FACADE_H
#endif

#include "subsysA.h"
#include "subsysB.h"

class Facade {

public:
	Facade();
	~Facade();
	
	void operate();

private:
	SubsysA *_sysA;
	SubsysB *_sysB;
};
