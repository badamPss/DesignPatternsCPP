#include "../include/creator.h"
#include <cassert>

int main() {
	ConcreteCreator2 c;
	Product* p = c.FactoryMethod();
	assert(p->Operation() == "{Result of the ConcreteProduct2}");
	delete p;
	return 0;
}