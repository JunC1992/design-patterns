#ifndef TARGET_H
#define TARGET_H

class Target{

public:
	Target();
	~Target();
	
	virtual void request()=0;
};
#endif
