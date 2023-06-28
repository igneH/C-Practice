#include "stdio.h"
#include "math.h"

int main(){
    const double PI = 3.14159;
    double radius;
    double circumfence;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumfence = 2 * PI * radius;
    area = PI * pow(radius,2);

    printf("\nCircumfence: %lf", circumfence);
    printf("\nArea: %lf", area);
    return 0;
}