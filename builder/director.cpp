#include "director.h"

Director::Director(){}
Director::~Director(){}

Builder* Director::generateInst(void){
	return new ConcreteBuilder();
}
