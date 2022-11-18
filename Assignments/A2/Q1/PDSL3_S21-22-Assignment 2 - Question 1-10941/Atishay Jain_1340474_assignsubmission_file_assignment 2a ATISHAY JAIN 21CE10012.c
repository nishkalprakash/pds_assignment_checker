main()
{
float z,a,s;
 int k=0;
 printf("enter the initial value of height\nZ=");
 scanf("%f",&z);
 printf("\n z=%f",z);
 while(1)
 {
     s=sqrt(z);
     a=z;
     z=(a-s);
     k++;
     if(z<0)
     {
        z=-z;

     }
     if(a==z)
     {
         s=s-1/k;
         z=z-s*s;
     }
     printf("\nheight z=%f",z);
      printf("\n iteration no. k=%d",k);
     if(z==0.0)
     {
         break;
     }
 }
 getch();
 return 0;

}
