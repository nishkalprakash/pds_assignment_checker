//ROLL NO 23CE10025
//NAME.: KARTHIKK KALLURI
#include <stdio.h>
#include <stdlib.h>//used stdlib.h to access rand function
int main()
{
  int a1[10],a2[10],a3[10],a4[10];
  
  for(int i=0;i<10;i++)
    {
      a1[i]=(rand()%21)+10;
      a2[i]=(rand()%31)+30;
      a3[i]=(rand()%31)+60;
      a4[i]=(rand()%31)+90;
    }
  for(int i=0;i<10;i++)
    {
      printf("a1[%d]=%d,",i,a1[i]);
    }
    for(int i=0;i<10;i++)
    {
      printf("a2[%d]=%d,",i,a2[i]);
    }
      for(int i=0;i<10;i++)
    {
      printf("a3[%d]=%d,",i,a3[i]);
    }
        for(int i=0;i<10;i++)
    {
      printf("a4[%d]=%d,",i,a4[i]);
    }//this marks the end of part(a)
	printf("\n");
	int a5[20];
	for(int i=0,j=1,k=0,l=0;i<20,j<21,k<10,l<10;i=i+2,j=j+2,k++,l++)//took 4 variables to decrease the lines of code
	  {
	    a5[i]=a1[k];
	    a5[j]=a2[l];
	  }
	for(int i=0;i<10;i++)
	  {
	    printf("a1[%d]=%d\n",i,a1[i]);
	  }
		for(int i=0;i<10;i++)
	  {
	    printf("a2[%d]=%d\n",i,a2[i]);
	  }
			for(int i=0;i<20;i++)
	  {
	    printf("a5[%d]=%d\n",i,a5[i]);
	  } //End of part (b)
			//Part (c)

			int a6[20];
			for(int i=0,j=1,k=9,l=0;i<=19,j<21,k>=0,l<10;i=i+2,j=j+2,k--,l++)
			  {
			    a6[i]=a3[k];
			    a6[j]=a4[l];

			    
			  }
			for(int i=0;i<10;i++)
			  {
			    printf("a3[%d]=%d\n",i,a3[i]);
			  }
				for(int i=0;i<10;i++)
			  {
			    printf("a4[%d]=%d\n",i,a4[i]);
			  }
			   	for(int i=0;i<20;i++)
			  {
			    printf("a6[%d]=%d\n",i,a6[i]);
			  }//this is end of part(c)
				//part(d)
				printf("\n");
				int a7[40];
				for(int i=0,j=1,k=19,l=19;i<42,j<43,k>=0,l>=1;i=i+2,j=j+2,k--,l--)
				  {
				    a7[i]=a5[k];
				    a7[j]=a6[l];
				  }
				for(int i=0;i<20;i++)
				  {
				    printf("a5[%d]=%d\n",i,a5[i]);
				  }
					for(int i=0;i<20;i++)
				  {
				    printf("a6[%d]=%d\n",i,a6[i]);
				  }
						for(int i=0;i<40;i++)
				  {
				    printf("a7[%d]=%d\n",i,a7[i]);
				  }
				
					     
	        
	   
}
