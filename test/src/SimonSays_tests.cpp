//
// Created by Konstantin Gredeskoul on 5/16/17.
//
#include "SimonSays/SimonController.h"
#include "gtest/gtest.h"

using namespace std;

class SimonSaysTest : public ::testing::Test {
public:

protected:

  void SetUp() override {
  };

    void TearDown() override {
  };

};

TEST(SimonSaysTest, simon_hhandles_zeros) {
  EXPECT_EQ(0, 0);
}
