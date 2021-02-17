#include "test_area.hpp"
#include "test_perimeter.hpp"
#include "test_constructor.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
