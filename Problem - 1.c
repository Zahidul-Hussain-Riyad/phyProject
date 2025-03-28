#include<stdio.h>
int main ( )
{
    float wavelength_nm, slit_width, wavelength_um, theta;
    int order;

    printf("Enter wavelength (in nm): ");
    scanf("%f", &wavelength_nm);

    if (wavelength_nm < 380 || wavelength_nm > 750)
    {
        printf("Out of range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter slit width (in μm): ");
    scanf("%f", &slit_width);

    printf("Enter order of diffraction (m): ");
    scanf("%d", &order);

    wavelength_um = wavelength_nm / 1000;
    theta = asin(order * wavelength_um / slit_width) * (180 / 3.1416);

    printf("The diffraction angle is: %.2f degrees\n", theta);

    return 0;
}

