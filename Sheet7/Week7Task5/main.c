#include <stdio.h>
#define PI 3.14159265359

typedef struct {
    double radius;
    double height;
    double volume_liters;
} Cylinder;

int main() {

    Cylinder c;
    FILE *file;

    printf("Enter radius of cylinder (m): ");
    scanf("%lf", &c.radius);

    printf("Enter height of cylinder (m): ");
    scanf("%lf", &c.height);

    double volume_m3 = PI * c.radius * c.radius * c.height;

    // Convert to liters (1 m³ = 1000 liters)
    c.volume_liters = volume_m3 * 1000;

    // Open file
    file = fopen("cylinder_data.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(file, "Cylinder Data\n");
    fprintf(file, "Radius: %.2f m\n", c.radius);
    fprintf(file, "Height: %.2f m\n", c.height);
    fprintf(file, "Volume: %.2f liters\n", c.volume_liters);

    // Close file
    fclose(file);

    printf("Data successfully written to file.\n");

    return 0;
}

