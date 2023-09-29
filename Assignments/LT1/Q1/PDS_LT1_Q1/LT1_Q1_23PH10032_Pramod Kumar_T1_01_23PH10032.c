//Name:Pramod Kumar
//roll no:23PH10032

  #include<stdio.h>
  int main()
  {
    int n,a=1;
    printf("enter a number between 1and 9\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
      {
	for(int j=1;j<=i;j++)
	  {
	    printf("%d ",a);
	  }
	a++;
	printf("\n");
      }
    return 0;
  }
