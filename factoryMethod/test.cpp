#include "concreteFactory.h"

int main(){

	Factory* fc = new ConcreteFactory();
	Product* prod = fc->factoryMethod();
	
	prod->use();
}
