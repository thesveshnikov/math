#include "distance_speed_and_time_problems.h"
#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void distance_speed_and_time_problems(void) {
    float x1, y1, x2, y2;

    printf("Enter coordinates of point 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Distance between the points: %.2f\n", distance(x1, y1, x2, y2));
}