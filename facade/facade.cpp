#include "facade.h"

Facade::Facade(){
	_sysA = new SubsysA();
	_sysB = new SubsysB();
}

Facade::~Facade(){
	delete _sysA;
	delete _sysB;
}

void Facade::operate(){

	_sysA->operateA();
	_sysB->operateB();
}
