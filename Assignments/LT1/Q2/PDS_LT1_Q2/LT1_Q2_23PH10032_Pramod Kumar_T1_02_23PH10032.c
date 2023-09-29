//Name:Pramod Kumar
//roll no:23PH10032


   #include<stdio.h>
   #include<stdlib.h>
   int main()
   {
     int n , a[100],sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,suma=0;
     float k, p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
     printf("enter the number :");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
       {
	 a[i]=rand()%100;}
     for(int i=0;i<n;i++){
       printf("%d ",a[i]);
	 if(0<=a[i]<=9)
	   {sum1+=a[i];}
         if(10<=a[i]<=19)
	   {sum2+=a[i];}
	 if(20<=a[i]<=29)
	   {sum3+=a[i];}
	 if(30<=a[i]<=39)
	   {sum4+=a[i];}
	 if(40<=a[i]<=49)
	   {sum5+=a[i];}
	 if(50<=a[i]<=59)
	   {sum6+=a[i];}
	 if(60<=a[i]<=69)
	   {sum7+=a[i];}
	 if(70<=a[i]<=79)
	   {sum8+=a[i];}
	 if(80<=a[i]<=89)
	   {sum9+=a[i];}
	 if(90<=a[i]<=99)
	   {sum10+=a[i];}
	 suma+=a[i];//random numbers ka sum
       }
	 // for(int j=0;j<n;j++)
	 // {
	 // printf("%d ",a[j]);
	 // }
     printf("\n");
     k=(100.0)/suma;
     
     p1=k*sum1;
     p2=k*sum2;
       p3=k*sum3;
     p4=k*sum4;
     p5=k*sum5;
     p6=k*sum6;
     p7=k*sum7;
     p8=k*sum8;
     p9=k*sum9;
     p10=k*sum10;
     printf("%f\n",p1);
     printf("%f\n",p2);
     printf("%f\n",p3);
     printf("%f\n",p4);
     printf("%f\n",p5);
     printf("%f\n",p6);
     printf("%f\n",p7);
     printf("%f\n",p8);
     printf("%f\n",p9);
     printf("%f\n",p10);
     
     return 0;
   }
