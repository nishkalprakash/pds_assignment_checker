//name:pramod kumar
//roll no:23PH10032

  #include<stdio.h>
int main()
  {
    int n, ln=-1,sln=-1,sml=-1;
    while(1){
      int a[];
      printf("enter numbers:");
      for(int i=0;;i++)
	{scanf("%d",&a[i]);}
      for(int i=0;;i++)
	{
      if(a[i]<0){
	break;}
      if(a[i]>ln){ ln=a[i];
	sln=ln;}
	if(sln<=a[i]&&ln>sln)
	  {sln=a[i];}
      }
    }
    return 0;}
      
     
