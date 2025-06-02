#include "../include/product.h"
#include <gtest/gtest.h>

TEST(ConcreteProduct1Test, OperationReturnsCorrectString) {
	ConcreteProduct1 p;
	EXPECT_EQ(p.Operation(), "{Result of the ConcreteProduct1}");
}

// Не нужен main(), так как gtest_main предоставляет его