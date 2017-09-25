/**
 * @flieName    : main.cpp
 * @author      : Ashish Patel
 * @version   : 1
 * @copyright   : GNU
 * @section DESCRIPTION
 * PID_Controller main file
 */

#include "PIDController.h"
#include <iostream>
/**
 * @brief      Main function
 *
 * @return     return 0
 */
int main() {
  PIDController control;
  std::cout << control.compute(0.0, 0.0) << std::endl;
  std::cout << control.compute(5, 4.0) << std::endl;
  std::cout << control.compute(7.0, 8.0) << std::endl;
  std::cout << control.compute(0.0, 0.0) << std::endl;
  return 0;
}
