#include "../include/product.h"
#include <cassert>

int main() {
	ConcreteProduct1 p;
	assert(p.Operation() == "{Result of the ConcreteProduct1}");
	return 0;
}