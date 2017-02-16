#ifndef ADAPTER_H
#define ADAPTER_H

#include"target.h"
#include"adaptee.h"
class Adapter : public Target{

public:
	Adapter(Adaptee * adat);
	~Adapter();

	virtual void request();

private:
	Adaptee* _adat;
};
#endif
