#include<stdio.h>
#include<math.h>

int main ( )
{
    float lambda1 = 530;
    float lambda2 = 700;
    float theta1 = 65.0;
    float a, theta2;

    a = (3 * lambda1) / sin(theta1 * (3.1416 / 180));
    theta2 = asin(2 * lambda2 / a) * (180 / 3.1416);

    printf("The second-order bright spot for red light is at %.2f degrees.\n", theta2);

    return 0;
}

