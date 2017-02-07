#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton{

	Singleton();
public:
	~Singleton();

	static Singleton* instance;
	static Singleton* getInstance();
};

#endif
