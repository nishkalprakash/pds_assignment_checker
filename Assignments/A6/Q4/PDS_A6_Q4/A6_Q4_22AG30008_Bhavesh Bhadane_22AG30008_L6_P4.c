#include<stdio.h>
int buildset(int j){
	int A,n,i,a[i];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++){
	return(printf("A=%d",a[i]));

	}
}
int Searchset(int A,int k){
	int A[i],x;
	 buildset(n);
  for(i=0;i<n;i++){
  	if(A[i]== x){
  		return(printf("%d is present in A"));
  }
}
int union(int s,int t){
	int i,p[i];
	buildset(s);
	buildset(t);
	return( printf("union = (p[a] || p[b])"));
}
int intersection(int c,int d){
	int i,q[i];
	buildset(c);
	buildset(d);
	return( printf("intersection = (%d && %d),q[c],q[d]"));

}

int main()
{
	int A,a,b,x,y,z,m,n;
	printf("Enter the number of elements in array A");
	scanf("%d",&x);
	printf("Enter the number of elements in array B");
	scanf("%d",&y);
	buildset(x);
	buildset(y);
   printf("Press 1 to perform search in set A");
   scanf("%d",1);
   printf("Enter the element to be searched in A");
   scanf("%d",&z)
   Searchset(A,z);

printf("Press 2 to perform search in set B");
   scanf("%d",2);
   printf("Enter the element to be searched in B");
   scanf("%d",&m)
   Searchset(A,m);

    printf("Press 3 to get union");
    scanf("%d",3);
    union(a,b);

    printf("Press 4 to get intersection");
    scanf("%d",4);
    intersection(a,b);

    printf("Press any other key to quit");
    scanf("%d",&n);
    break;


return 0;
}
