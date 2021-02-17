#ifndef __PERIMETER_HPP__
#define __PERIMETER_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(PerimeterTest, RegularPerimeter){
	Rectangle* rect = new Rectangle(3,4);
	int perimeter = rect->perimeter();
	EXPECT_EQ(perimeter, 14);
}

TEST(PerimeterTest, BigPerimeter){
        Rectangle* rect = new Rectangle(1234567,9876543);
        int perimeter = rect->perimeter();
        EXPECT_EQ(perimeter, 22222220);
}
TEST(PerimeterTest, DoublePerimeter){
        Rectangle* rect = new Rectangle(3.6,4.5);
        int perimeter = rect->perimeter();
        EXPECT_EQ(perimeter, 14);
}
TEST(PerimeterTest, EmptyPerimeter){
        Rectangle* rect = new Rectangle();
        int perimeter = rect->perimeter();
        EXPECT_EQ(perimeter, 0);
}

TEST(FailPerimeter, NegativeFail){
        Rectangle* shape = new Rectangle(-2,-10);
        EXPECT_TRUE(shape->perimeter() == 0000);
}

TEST(FailPerimeter, NormalFail ){
        Rectangle* shape = new Rectangle(12, 2);
        EXPECT_EQ(shape->perimeter(), 28);
}

TEST(FailPerimeter, PassingDoublesFail){
        Rectangle* shape = new Rectangle(12.1, 2.2);
        EXPECT_EQ(shape->perimeter(), 28);
}

TEST(FailPerimeter, OneNegFail){
        Rectangle* shape = new Rectangle(-2, 3);
        EXPECT_EQ(shape->perimeter(), 2);
}

#endif // __PERIMETER_HPP__
