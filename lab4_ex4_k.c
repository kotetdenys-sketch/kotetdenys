#include <stdio.h>
#include <math.h>

int main() {
    double PI = acos(-1.0);
    double a = -PI / 2.0;
    double b = PI / 2.0;
    double dx = PI / 20.0;
    
    double x, y;
;
    printf("Інтервал: [-PI/2; PI/2], Крок: PI/20\n\n");

    printf("-----------------------------\n");
    printf("|     x      |     y=f(x)   |\n");
    printf("-----------------------------\n");

    for (x = a; x <= b + dx/2; x += dx) {
        
        y = sin(x) * cos(x);

        printf("| %10.4f | %12.4f |\n", x, y);
    }

    return 0;
}