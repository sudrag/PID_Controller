/**
 * @fileName  : PIDController.h
 * @author    : Ashish Patel
 * @version   : 1
 * @copyright   : 
 * @section DESCRIPTION
 * PID_Controller Header file
 */
#ifndef PID_CONTROLLER_INCLUDE_PIDCONTROLLER_H_
#define PID_CONTROLLER_INCLUDE_PIDCONTROLLER_H_
/**
 * @brief      Class for PID Controller.
 */
class PIDController {
 private:
  float Kp, Ki, Kd;
 public:
  float previousError, iterm, timeDifference;
  PIDController();
  ~PIDController();
  float compute(float, float);
};

#endif  // PID_CONTROLLER_INCLUDE_PIDCONTROLLER_H_
