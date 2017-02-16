#include"adapter.h"

Adapter::Adapter(Adaptee* adat){
	_adat = adat;	
}
Adapter::~Adapter(){}

void Adapter::request(){

	_adat->sayHello();
}
