#include <stdio.h>
//declaration of the functions
int power(int x,int y);
int fac(int z);
int main(){
//declaring varibales
	float x,n,ans=0;
	scanf("%f",&x);
	printf(" ");
	scanf("%f",&n);
	//loop for calculation of series
	for (int j=1;j<=n;j++){
	
		ans += (float)power(x,j)/fac(j);
		
	}
	printf("%.4f",ans);
	

}

int power(int x,int y){
//calculation of power of x
	int k =1;
	for (int z=1;z<y;z++){
		k *= x;}
	return k;

}
int fac(int z){
//calculation of factorial.
	int l=1;
	for (int i=1;i<z;i++){
		 l *=i;}
	return l;
}
