#include <stdio.h>

#define PI 3.14159
#define STATUS_OK 1
#define DEBUG_MODE

double calculate_area(double radius);

int main(void){
    double radius = 10.0;
    double area;

    area = 0.0;

    #ifdef DEBUG_MODE
        printf("[DEBUG]: Starting calculating...\n");
    #endif

    if (radius > 0){
        area = calculate_area(radius);
        printf("The area is: %.2f\n", area);
    }else{
        printf("Invalid radius\n");
    }

    printf("Counting down: ");
    for (int i = 3; i > 0; i--){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

double calculate_area(double r){
    return PI * r * r;
}
