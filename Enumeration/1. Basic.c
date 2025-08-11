#include <stdio.h>

enum Direction { TOP, RIGHT, BOTTOM, LEFT };
enum Product { ADD_TO_CART, PRICING };

/** Value Assign Manually. Unassigned variable value
 * automatically incremented by 1 from previous variable
 */
// enum Direction { TOP = 1, RIGHT = 0, BOTTOM = 2, LEFT };

void main() {
    printf("%d\n", TOP);
    printf("%d\n", RIGHT);
    printf("%d\n", BOTTOM);
    printf("%d\n", LEFT);
    printf("%d\n", ADD_TO_CART);
    printf("%d\n", PRICING);


    enum Product pro = PRICING;
    printf("%d\n", pro);

    enum Direction dir = LEFT;
    printf("%d\n", dir);

    dir = PRICING;
    printf("%d\n", dir);

    pro = LEFT;
    printf("%d\n", pro);

    printf("Equal or Not = %d\n", TOP == ADD_TO_CART);
}