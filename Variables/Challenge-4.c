#include <stdio.h>
int main () {


    float km_h, m_s;
    printf("Enter the speed in km/h\n");
    scanf("%f", &km_h);
    m_s = km_h * 0.277778;
    printf("The speed in m/s is: %.2f\n", m_s);


    return 0;

}