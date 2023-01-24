/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 9
Description : Defining a C structure rectangle and finding its area
*/

#include <stdio.h>											// Includes the standard IO header file

struct coords{												// coords structure with members as x and y
	float x;
	float y;
};

struct rectangle{											// rectangle structure with members as top_left coords and bottom_right coords
	struct coords tl;
	struct coords br;
};

float height(struct rectangle rect){						// calculate the height
	return rect.br.y - rect.tl.y;							// since rectangle is axis parallel
}

float width(struct rectangle rect){							// calculate the width
	return rect.br.x - rect.tl.x;
}

float area(struct rectangle rect){							// calculate the area
	return height(rect) * width(rect);
}

int main() {
	struct rectangle rect;									// declaring stucture

	printf("Top Left X : ");								// taking input
	scanf("%f", &rect.tl.x);
	printf("Top Left Y : ");
	scanf("%f", &rect.tl.y);
	printf("Bottom Right X : ");
	scanf("%f", &rect.br.x);
	printf("Bottom Right Y : ");
	scanf("%f", &rect.br.y);

	printf("Area : %f\n", area(rect));						// area is printed
	return 0;
}