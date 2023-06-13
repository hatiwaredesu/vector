#include <stdio.h>
#include <math.h>

int main(void)
{
 
  float x, y, z, angle;
  printf("vector?\n");
  scanf("%f %f %f", &x, &y, &z);
  
  printf("roll?\n");
  scanf("%f", &angle);
  
  float theta = angle * 3.14159265 / 180.0;
  float a[3][3] = {cos(theta), -sin(theta), 0.0,
                   sin(theta), cos(theta), 0.0,
                   0.0, 0.0, 1.0
  };
  float x_rotated = a[0][0] * x + a[0][1] * y + a[0][2] * z;
  float y_rotated = a[1][0] * x + a[1][1] * y + a[1][2] * z;
  float z_rotated = a[2][0] * x + a[2][1] * y + a[2][2] * z;

  printf("%.2f %.2f %.2f\n", x_rotated, y_rotated, z_rotated);

  return 0;
}
