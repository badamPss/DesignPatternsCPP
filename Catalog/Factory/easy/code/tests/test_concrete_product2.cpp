#include "../include/product.h"
#include <cassert>

int main() {
	ConcreteProduct2 p;
	assert(p.Operation() == "{Result of the ConcreteProduct2}");
	return 0;
}