#include "../include/creator.h"
#include <cassert>

int main() {
	ConcreteCreator1 c;
	Product* p = c.FactoryMethod();
	assert(p->Operation() == "{Result of the ConcreteProduct1}");
	delete p;
	return 0;
}