#include <stdio.h>
#include <math.h>

const float pi = 3.14;

int main(){
	int number;
	float a, b, c, r, o, perimeter, area, halfper;
	printf("Enter the shape number: 1 - circle, 2 - triangle \n");
	scanf("%d", &number);
	
	switch(number){
		
		case 1:
			printf("Enter the origin point: \n");
			scanf("%f", &o);
			printf("Enter the radius of the circle: \n");
			scanf("%f", &r);
			area = pi * r * r;
			perimeter = 2 * pi * r;
			printf("Area of the circle: %.2f \n Perimeter of the circle: %.2f \n", area, perimeter);
			break;
			
		case 2:
			printf("Enter the sides of the triangle: \n");
			scanf("%f %f %f", &a, &b, &c);
			if (a + b > c || a + c > b || b + c > a){
				perimeter = a + b + c;
				halfper = perimeter/2;
				area = sqrt(halfper * (halfper - a) * (halfper - b) * (halfper - c));
				printf("Area of the triangle: %.2f \n Perimeter of the triangle: %.2f \n", area, perimeter);
				break;
			}
		else{
			printf("Incorrect!");
		}
	}
	
	return 0;
	
}
