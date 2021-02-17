#ifndef __TEST_AREA__
#define __TEST_AREA__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(FailArea, NegativeFail){
        Rectangle* shape = new Rectangle(-2, 3);
        EXPECT_TRUE(shape->area() == 0000);
}

TEST(FailArea, NormalFail){
        Rectangle* shape = new Rectangle(12, 2);
        EXPECT_EQ(shape->area(), 24);
}

TEST(FailArea, DoubleNegFail){
        Rectangle* shape = new Rectangle(-2, -4);
        EXPECT_EQ(shape->area(), 8);
}

///////////////////////////// RODRIGO

TEST(AreaTest, Regular_Area){
        Rectangle* rect = new Rectangle(2 , 1);
        int area = rect->area();
        EXPECT_EQ(area, 2);
}

TEST(AreaTest, Double_Area){
        Rectangle* rect = new Rectangle(3.9 , 2.6);
        int area = rect->area();
        EXPECT_EQ(area, 6);
}

TEST(AreaTest, Big_Area){
        Rectangle* rect = new Rectangle(4209,1232);
        int area = rect->area();
        EXPECT_EQ(area,5185488);
}

TEST(AreaTest, Zero_Area){
        Rectangle* rect = new Rectangle(0, 2);
        int area = rect->area();
        EXPECT_EQ(area, 0);
}
TEST(AreaTest, NegativeTest){
        Rectangle* rect = new Rectangle(-1, 2);
        int area = rect->area();
        EXPECT_EQ(area, -2);
}

#endif
