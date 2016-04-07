#include "gtest/gtest.h"
#include "temp.h"

TEST(FIRSTTEST, foobarfuncTEST) {
  EXPECT_EQ(4, foobarfunc(2));
}

TEST(FIRSTTEST, stringbarfuncTEST) {
  std::string a("Hello World!");
  EXPECT_EQ(a, stringbarfunc());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
