#include <stdio.h>

int main()
{
	float r;
	float h;
	double pi = 3.142;
	
	float v;
	float sa;
	
	printf("Enter the radius of the cylinder: \t ");
	scanf("%f", &r);
	
	printf("Enter the height of the cylinder: \t ");
	scanf("%f", &h);
	
	v = pi*r*r*h;
	sa = 2*pi*r*r + pi*2*r*h;
	
	printf("The Volume of the cylinder is %f \n", v);
	printf("The Surface Area of the cylinder is %f \n", sa);
	
	return 0;
}