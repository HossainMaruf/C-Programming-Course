#include <stdio.h>

typedef struct {
    int x, y;
} Point2D;


void main() {
    (Point2D){.y = 15, .x = 10};
}