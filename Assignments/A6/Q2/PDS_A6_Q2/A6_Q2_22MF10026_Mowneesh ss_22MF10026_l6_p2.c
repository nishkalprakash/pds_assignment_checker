#include<stdio.h>
#include<lib.h>

int gcd (int x, int y){
	int ans=0;
i	if(x<=y){
	for( int i=1; i<=x; i++){
	if(x%i==0&& y%i==0){
	ans=i ;
}
}
}
	if(y<x){
	for(int i=1;i<=y; i++){
	if(x%i==0&& y%i==0){
	ans=i ;
}
}
}

return ans;
}

int main()
