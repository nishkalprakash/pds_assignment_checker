  #include<stdio.h>
struct rectangle{
	int x;
	int y;
};
int area(int x1, int y1, int x2, int y2){//function to find area 
	int ar=0;
	ar=(x1-x2)*(y1-y2);
	if(ar<0){
		ar=ar*-1;
	}
	return ar;
}
int main(){
	struct rectangle r[2];//taking input of the points 
	for(int i=0; i<2; i++){
		scanf("%d", &r[i].x);
		scanf("%d", &r[i].y);
	}
int Ar;
Ar=area(r[0].x, r[0].y, r[1].x, r[1].y);
printf("Area : %d\n", Ar);//printing the output 
return 0;
}    

