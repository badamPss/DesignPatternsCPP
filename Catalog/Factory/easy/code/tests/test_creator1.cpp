#include "../include/creator.h"
#include <gtest/gtest.h>

TEST(ConcreteCreator1Test, FactoryMethodCreatesCorrectProduct) {
	ConcreteCreator1 c;
	std::unique_ptr<Product> p(c.FactoryMethod());
	EXPECT_EQ(p->Operation(), "{Result of the ConcreteProduct1}");
}