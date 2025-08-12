#include <stdio.h>
#define pie 3.1415

int main()
    {
        float r,area,perimeter;

        printf("ENTER THE VALUE OF RADIUS:: ");
        scanf("%f", &r);
        
        area= pie*r*r;
        perimeter= 2*pie*r;

        printf("THE AREA OF THE CIRCLE IS:: %.2f\n", area);
        printf("THE PERIMETER OF THE CIRCLE IS:: %.2f\n", perimeter);

        return 0;

    }