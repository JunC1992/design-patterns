#include "singleton.h"
#include <iostream>
Singleton::Singleton(){}
Singleton::~Singleton(){
	delete instance;
}

Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance(){
	if(instance == NULL)
		instance = new Singleton();

	return instance;
}
