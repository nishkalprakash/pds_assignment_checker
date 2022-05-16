/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */

# include<stdio.h>
# include<math.h>

int main(){
	int x1,x2,x3 ,y1,y2,y3,flag,flag_2;
	float a , b ,c;//length of sides of a triangle
	
	
	printf("Enter the three coordinates:");
	scanf("(%d,%d),(%d,%d),(%d,%d)", &x1,&y1,&x2,&y2,&x3,&y3);
	a = sqrt( (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	b = sqrt ((x1-x3)*(x1-x3)+ (y1-y3)*(y1-y3));
	c = sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	if(a < b + c && b < c + a && c < a + b){
		printf("\nThis is a valid triangle");
		flag = 1;
	}
	else{
		printf("\nThis is an invalid triangle");
		flag = 0;
	}
	
	switch(flag){
		case 0: flag_2 = 0;
				break;
		case 1:
		{
			if(a*a+b*b > c*c && b*b + c*c > a*a && c*c + a*a > b*b){
				flag_2 = 1;
			}
			else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
				flag_2 = 2;
			}
			else
				flag_2 = 3;
		}
	}
	switch(flag_2){
		case 0:break;
		case 1: printf("\nThis is a acute-angled triangle"); break;
		case 2: printf("\nThis is a right-angled triangle triangle"); break;
		case 3: printf("\nThis is a obtuse-angled triangle");
	}
	return 0;
}