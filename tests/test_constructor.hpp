#ifndef __CONSTRUCTOR_HPP__
#define __CONSTRUCTOR_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"


TEST(ContructorTest, Construc_Width){
	Rectangle* rect = new Rectangle(2 , 1);
	EXPECT_EQ(rect->get_width(), 2);
}

TEST(ContructorTest, Construc_Height){
        Rectangle* rect = new Rectangle(2 , 1);
        EXPECT_EQ(rect->get_height(), 1);
}

TEST(ContructorTest, No_Width){
        Rectangle* rect = new Rectangle();
        EXPECT_EQ(rect->get_width(), 0);
}

TEST(ContructorTest, No_Height){
        Rectangle* rect = new Rectangle();
        EXPECT_EQ(rect->get_height(), 0);
}

TEST(ContructorTest, Width_No_Height){
        Rectangle* rect = new Rectangle(2,0);
        EXPECT_EQ(rect->get_height(), 0);
}

TEST(ContructorTest, Height_No_Width){
        Rectangle* rect = new Rectangle(0,1);
        EXPECT_EQ(rect->get_width(), 0);
}

TEST(FailConstructor, NegativeWidth){
        Rectangle* shape = new Rectangle(-2, -3);
        EXPECT_EQ(shape->get_width(), -2);
}



TEST(FailConstructor, NegativeHeight){
        Rectangle* shape = new Rectangle(-2, -3);
        EXPECT_EQ(shape->get_height(), -3);
}

TEST(FailConstructor, DoubleWidth){
        Rectangle* shape = new Rectangle(12.6, 2.198);
        EXPECT_EQ(shape->get_width(), 12);
}

TEST(FailConstructor, DoubleHeight){
        Rectangle* shape = new Rectangle(12.6, 2.198);
        EXPECT_EQ(shape->get_height(), 2);
}



// FAILING DEFAULT CONSTRUCTOR 
TEST(FailDefaultConstructor, DoubleHeight){
	Rectangle* shape = new Rectangle();
	EXPECT_EQ(shape->get_height(), 0.0);
}


#endif //__CONSTRUCTOR_HPP__
