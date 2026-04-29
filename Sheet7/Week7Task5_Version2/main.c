#include <stdio.h>
#define PI 3.14159265359

typedef struct {
    double radius;
    double height;
    double volume_liters;
} Cylinder;
int main() {
    Cylinder c;
    FILE *inputFile, *outputFile;
    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: cannot open input file!\n");
        return 1;
    }
    // Read radius and height from file
    fscanf(inputFile, "%lf %lf", &c.radius, &c.height);
    fclose(inputFile);
    // Compute volume in cubic meters
    double volume_m3 = PI * c.radius * c.radius * c.height;
    // Convert to liters
    c.volume_liters = volume_m3 * 1000;
    // Open output file in write mode
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        printf("Error: cannot open output file!\n");
        return 1;
    }

    // Write results to file
    fprintf(outputFile, "Cylinder Results\n");
    fprintf(outputFile, "Radius: %.2f\n", c.radius);
    fprintf(outputFile, "Height: %.2f\n", c.height);
    fprintf(outputFile, "Volume (liters): %.2f\n", c.volume_liters);

    fclose(outputFile);

    printf("Data processed successfully from file.\n");

    return 0;
}

