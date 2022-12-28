/*
Name          : Admya Maheshwari
sdction       : 14
Roll No.      : 22CH10004
Assignment no.: 6
Description   : A C program to deterrmine the co prime pairs
*/

int gcd(int m,int n);
//function to find out the gcd of any two numbers
int gcd(int m,int n){

	if(m==0){
		  return n;
		}		
	if (n==0){
		  return m;
			}
	if (n>m){
		  return gcd(m,n-m);
			}
	else {
		  return gcd(m-n,n);
		}
			}


int main(){
	int n;
	int arr[n];
	scanf("%d",&n);
	//array defined here
	for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
				}
	//taking the gcd of array and printing it 
	for(int j=0;j<n-1;j++){
		if(gcd(arr[j],arr[j+1])==1){
			printf("Co-Prime Pairs :");
			printf("(%d,%d)",arr[j],arr[j+1])

			    }
				}
	


return 0;
}
	
		
