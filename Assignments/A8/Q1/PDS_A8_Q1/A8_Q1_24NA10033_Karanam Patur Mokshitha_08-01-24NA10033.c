#include<stdio.h>
#include<math.h>
int digits(int a,int count)
{
       
        if(a==0) return count;
        a=a/10;
        count++;
     return digits(a,count);
}
int IsPalindrome(int x,int y1,int y2)//x is the number
{
  if(y1<=y2) return 1;
  int last_digit=(x/(int)pow(10,y1-1))%10;;
  int first_digit=(x/(int)pow(10,y2-1))%10;
  if(first_digit==last_digit)
  {
  return IsPalindrome(x,y1-1,y2+1);
  }
  return 0;
  
}
         
  int main()
{
      int n;
      printf("Enter a natural number n where n is in the range[0,10^5]:");
      	if(n>=0 && n<=pow(10,5))
      	{
      	scanf("%d",&n);
      	}
      	  else
      	  {
      	  printf("\nERROR:n is not in the range [0,10^5]");
      	  }
      	  int found=IsPalindrome(n,digits(n,0),1);
      	  if(!found)
      	  {
      	  printf("Not Palindrome\n");
      	  }
      	  else
      	  {
      	  printf("Palindrome\n");
      	  }
      	  
      	 return 0;
      	 }
      	  
      	  


           

