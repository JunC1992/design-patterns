#include "director.h"

int main(){
	Director* dire = new Director();
	Product* prod = new Product();
	Builder* buil = dire->generateInst();
	buil->setInstance(prod);

	prod->getParts();
	return 0;
}
