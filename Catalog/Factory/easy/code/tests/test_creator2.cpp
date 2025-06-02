#include "../include/creator.h"
#include <gtest/gtest.h>

TEST(ConcreteCreator2Test, FactoryMethodCreatesCorrectProduct) {
	ConcreteCreator2 c;
	std::unique_ptr<Product> p(c.FactoryMethod());
	EXPECT_EQ(p->Operation(), "{Result of the ConcreteProduct2}");
}