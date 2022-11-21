#include<stdio.h>
#include<math.h>
int main(){
	int Y,n;
	float g;
	g=9.78;
	printf("Enter the height: ");
	scanf("%d",&Y);
	printf("Enter the number of time the ball touches the ground: ");
	scanf("%d",&n);
	double v;
	v=pow((2*g*Y),1/2);
	float height=Y;
	if(n==1){
		printf("Height: %d",Y);
	}
	else{
		for(int i=2;i<=n;i++){
			v=v/2;
			height+=(2*((v*v)/(2*g)));
		}
		printf("Height: %lf",height);
	}
	return 0;
}

