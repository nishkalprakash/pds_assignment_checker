 #include<stdio.h>

int main() {
int a,b,c,d;
int length,breadth,perim,area;
float p,q;
printf("Enter the coordinates of the bottom-left corner(Give a space between the two coordinates)\n");
scanf("%d %d", &a,&b);
printf("Enter the coordinates of the top right corner(Give a space between the two coordinates)\n");
scanf("%d %d", &c,&d);
length = c-a;
breadth = d-b;
perim = 2*(length+breadth);
area = length*breadth;
 p = (float)(a+c)/2;
 q = (float)(b+d)/2;
printf("The area of the rectangle is %d square unit and the perimeter of the rectangle is %d unit\n",area,perim);
printf("The point of intersection of diagonals is (%f,%f)\n", p,q);
return 0;
}



