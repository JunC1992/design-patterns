#include "adapter.h"

int main(){

	Adaptee* aptee = new Adaptee();
	Target* tar = new Adapter(aptee);

	tar->request();
	return 0;
}
