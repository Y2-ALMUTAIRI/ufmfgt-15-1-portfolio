#include <stdio.h>

typedef struct {
    double x, y;
} Point;

typedef struct {
    Point ul, lr;
} Rectangle;

double area(Rectangle r) {
    return (r.lr.x - r.ul.x) * (r.ul.y - r.lr.y);
}

Point center(Rectangle r) {
    Point c;
    c.x = (r.ul.x + r.lr.x) / 2;
    c.y = (r.ul.y + r.lr.y) / 2;
    return c;
}

void move(Rectangle *r, double dx, double dy) {
    r->ul.x += dx;
    r->lr.x += dx;
    r->ul.y += dy;
    r->lr.y += dy;
}

int main() {
    Rectangle r = {{0, 10}, {10, 0}};
    printf("Area: %.2f\n", area(r));

    Point c = center(r);
    printf("Center: (%.2f, %.2f)\n", c.x, c.y);

    move(&r, 2, 3);
    printf("Moved Rectangle UL: (%.2f, %.2f)\n", r.ul.x, r.ul.y);

    return 0;
}

