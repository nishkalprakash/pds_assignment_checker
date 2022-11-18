/* kethavath shivakumar
 21MI31013 */
 #include<stdio.h>
int main()
{
int k,i,j,Arr[k-1],largest,sum;
printf("ENTER THE VALUE OF k\n");//user should enter  the value of k
scanf("%d",&k);
 int array[k];
printf("ENTER THE ARRAY ELEMENTS\n");
     for(i=0;i<k;i++){

   scanf("%d",&array[i]);//compiler reads the array elements.

}    for(i=k-1;i>=0;i--){

       for(j=0;j<i;j++){if((array[i]%array[j])==0)sum=sum+1;}Arr[i]=sum;
}
largest=Arr[0];

      for(i=0;i<k-1;i++)
        {if (Arr[i]>largest)largest=Arr[i];}

     printf(" MAXIMUM OF ALL INDICES IS %d",largest);//highest of all elements is largest.

return(0);

}
