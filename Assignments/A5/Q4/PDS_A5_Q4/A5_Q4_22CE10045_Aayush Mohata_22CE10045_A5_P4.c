/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:5
Discription :to find elements of each bin 

*/
int main()
{
	int ar[n],i,max,min,bin,n,p;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the numbers of array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=min(a[n]);
	max=max(a[n]);
	if((max-min)%bin==0)
		p=(max-min)/bin;
	else
		p=((max-min)/bin)+1;
	
	for(i=1;i<bin;i++)
		{
		for(j=0;j<n;j++)
			{
			if((a[i]>min+i*p) &&(a[i]<=min+p*(i+1))
				printf("bin %d %d",i,a[i]);
			}
		}
	return 0;
}
		
			
