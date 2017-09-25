/**
 * @flieName    : test.cpp
 * @author      : Ashish Patel
 * @version   : 1
 * @copyright   : GNU
 * @section DESCRIPTION
 * PID_Controller test file
 */
#include <gtest/gtest.h>
#include <memory>
#include "PIDController.h"

TEST(PIDControllerTest, initializationValues) {
  PIDController control;
  ASSERT_EQ(0, control.iterm);
  ASSERT_EQ(0, control.previousError);
}

TEST(PIDControllerTest, computeFunction) {
  PIDController control;
  EXPECT_FLOAT_EQ(0.00, control.compute(0, 0));
  EXPECT_FLOAT_EQ(5.072, control.compute(5, 4));
  EXPECT_FLOAT_EQ(6.91, control.compute(7, 8));
  EXPECT_FLOAT_EQ(0.02, control.compute(0, 0));
}
