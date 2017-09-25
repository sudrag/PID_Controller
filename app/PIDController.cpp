/**
 * @fileName    : PIDController.cpp
 * @author      : Ashish Patel
 * @version   : 1
 * @copyright   :
 * @section DESCRIPTION
 * PIDController class member function declaration
 */

#include "PIDController.h"
#include <iostream>

/**
 * @brief      Constructor Initialize object using default value
 *
 */
PIDController::PIDController() {
  // Initializing the value of Kp, Ki, Kd, perviousError and iterm
  // std::cout << "A new PID object is created" << std::endl;
  previousError = 0;
  timeDifference = 0.005;
  iterm = 0;
  Kp = 0.05;
  Ki = 0.4;
  Kd = 0.0001;
}

/**
 * @brief      Destructor destroys the object
 *
 */
PIDController::~PIDController() {
  // std::cout << "Object has been destroyed" << std::endl;
}

/**
 * @brief      compute 
 *
 * @return     return float value
 */
float PIDController::compute(float desiredVelocity, float currentVelocity) {
  // Code to compute the velocity
  return 1;
}
