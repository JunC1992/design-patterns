#include "concreteProduct.h"
#include "concreteFactory.h"

int main(){

	Factory * fc = new ConcreteFactory();
	Product * prod = fc->createProduct();
	prod->use();
	
	return 0;
}
