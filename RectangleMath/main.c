#include <stdio.h>

int main(int argc, char **argv)
{
    //Declare height and weight as doubles
    double height, weight;
    
    //Declare values as 0.0
    height = 0.0;
    weight = 0.0;
    
    //Assign perimeter and area
    printf("Enter height\n");
    scanf("%lf", &height);
    
    printf("Enter weight\n");
    scanf("%lf", &weight);
    
    double perimeter = height + weight;
    double area = height * weight;
    
    printf("The perimeter is %.2f and the area is %.2f\n", perimeter, area);
    
	return 0;
}
