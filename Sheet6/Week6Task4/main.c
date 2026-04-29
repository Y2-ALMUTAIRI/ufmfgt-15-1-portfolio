/*
Filename: Week6Task4.c
 Author: Youssef Al Mutairi
 Date: 23/04/2026
*/
#include <stdio.h>
#include <math.h>
void calculate_rlc_properties(double R, double L, double C, double omega, double* impedance, double* phase_angle) {
    double Z_calc = sqrt(R*R + pow((omega*L - 1/(omega*C)), 2));
    double phi_calc = acos(R / Z_calc);

    *impedance = Z_calc;
    *phase_angle = phi_calc;
}

int main() {
 double R, L, C, omega;
 double impedance, phase_angle;
 R = 50.0;
 L = 0.01;
 C = 0.0001;
 omega = 1000.0;
 calculate_rlc_properties(R, L, C, omega, &impedance, &phase_angle);
 printf("R=%.1f, L=%.3f, C=%.5f, omega=%.1f\n", R, L, C, omega);
 printf("Impedance: %.4f Ohms\n", impedance);
 printf("Phase angle: %.4f radians (%.2f degrees)\n\n", phase_angle, phase_angle * 180.0 / M_PI);

 return 0;
}






