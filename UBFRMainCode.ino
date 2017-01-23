#include <math.h>
double magnitude;
double xInput;
double xOutput;
double yInput;
double yOutput;
double angle;

void setup() {






}

void loop() {
 // Step 1: find the magnitude(hypotenuse) a^2 + b^2 = c^2
  magnitude = sqrt((xInput*xInput)*(yInput*yInput));

  // Step 2: find the angle tan(angle) 
  angle = atan(yInput/xInput);
  //Adjust angle to new form
  /* Ex.
   * ^ -> ^       /   \
   * |    | --->  
   *   ->         \   /
   * 
   */
  angle += 45;
  if(angle > 360){
    angle -= 360;
  }

  // Step 3: using magnitude and angle, find new x and y value
  yOutput = (sin(angle)*mag)
  xOutput = sqrt((mag * mag) - (x * x));

  

}
