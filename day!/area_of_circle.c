#include <stdio.h>
#include <stdlib.h>

int main()
{

    float r,area;

    float pie=3.14;

    printf("enter the radius to calculate the area of the circle: \n");
    scanf("%f",&r);

    area = pie * r * r;

    printf("the area of the circle is %f",area);

    return 0;
}
