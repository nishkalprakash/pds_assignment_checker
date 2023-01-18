#include<stdio.h>
#include<math.h>

double dist(int x1, int x2, int y1, int y2){
	int sum_sq=0;
	sum_sq=powf((x1-x2), 2)+powf((y1-y2), 2);
	int d=0;
	d=sqrtf(sum_sq);
	return d;
}
struct circle{
	int x;
	int y; 
	float r;
};

int main(){
	struct circle c[2];
	printf("x y r\n");
	for(int i=0; i<2; i++){
		scanf("%d", &c[i].x);
		scanf("%d", &c[i].y);
		scanf("%f", &c[i].r);

	}
	int dis;
	dis=dist(c[0].x, c[1].x, c[0].y, c[1].y);
	if(dis<(c[0].r+c[1].r)){
		printf("Circles Intersect");
	}
	else{
		printf("Circles don't Intersect");
	}
	return 0; 
}