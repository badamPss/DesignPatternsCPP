#include "../include/creator.h"
#include <gtest/gtest.h>
#include <string>

TEST(ConcreteCreator1Test, SomeOperationContainsProductName) {
	ConcreteCreator1 c;
	std::string result = c.SomeOperation();
	EXPECT_TRUE(result.find("ConcreteProduct1") != std::string::npos);
}