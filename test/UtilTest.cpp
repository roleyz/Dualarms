#include <gtest/gtest.h>

#include "../include/util.h"

TEST(UtilTest, test_method) {
  EXPECT_EQ(dualarms::utils::test_str(), "hello World!");
}
