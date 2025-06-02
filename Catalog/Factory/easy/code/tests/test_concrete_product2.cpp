#include "../include/product.h"
#include <gtest/gtest.h>

TEST(ConcreteProduct2Test, OperationReturnsCorrectString) {
	ConcreteProduct2 p;
	EXPECT_EQ(p.Operation(), "{Result of the ConcreteProduct2}");
}