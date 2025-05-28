#include "../include/creator.h"
#include <cassert>
#include <string>

int main() {
	ConcreteCreator1 c;
	std::string result = c.SomeOperation();
	assert(result.find("ConcreteProduct1") != std::string::npos);
	return 0;
}