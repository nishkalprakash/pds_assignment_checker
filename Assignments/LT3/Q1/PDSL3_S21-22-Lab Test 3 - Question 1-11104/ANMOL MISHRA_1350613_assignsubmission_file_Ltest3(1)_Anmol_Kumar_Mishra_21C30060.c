#include<stdio.h>
#include<stdlib.h>
// NAME- ANMOL KUMAR MISHRA
// ROLL NO.-21EC30060
// SECTION-03
// SUBJECT- PDS LAB TEST-3
// QUESTION-1


//A structure for storing image.
struct _IMAGE
{
      int row;
      int column;
      int **pic;
};
//Function for allocating 2-D array.
int** allocate_array(struct _IMAGE img)
{
   img.pic = (int**)malloc(sizeof(int*)*img.row);
   for(int i=0;i<img.row;i++)
      img.pic[i] = (int*)malloc(sizeof(int)*img.column);
   return img.pic;
}
//Function for reading input from the user.
struct _IMAGE read_image()
{
   struct _IMAGE img;
    printf("Enter Row size: \n");
    scanf("%d",&img.row);
    printf("Enter Column size: \n");
    scanf("%d",&img.column);
    //Allocating 2-D array of size row*column.
    img.pic = allocate_array(img);
    printf("Enter image matrix: \n");
    for(int i=0;i<img.row;i++)
    {
      for(int j=0;j<img.column;j++)
         scanf("%d",&img.pic[i][j]);
    }
    return img;
}
//Function for printing the image matrix.
void print_image(struct _IMAGE img)
{
   for(int i=0;i<img.row;i++)
    {
      for(int j=0;j<img.column;j++)
         printf("%d ",img.pic[i][j]);
      printf("\n");
    }
}
//Function which return the boundary image  
struct _IMAGE output_image(struct _IMAGE img,int *cn)
{
     int cnt=2;
     for(int i=0;i<img.row;i++)
     {
      for(int j=0;j<img.column;j++)
      {
         if(img.pic[i][j]==0)
            continue;
          if(i+1<img.row&&j<img.column&&img.row>=0&&img.column>=0)
          {
          if(img.pic[i+1][j]!=0)
          img.pic[i][j] = img.pic[i+1][j];
          }
          if(i+1<img.row&&j+1<img.column&&img.row>=0&&img.column>=0)
          {
           if(img.pic[i+1][j+1]!=0)
          img.pic[i][j] = img.pic[i+1][j+1];
          }
          if(i+1<img.row&&j+1<img.column&&i>=0&&j-1>=0)
          {
            if(img.pic[i+1][j-1]!=0)
          img.pic[i][j] = img.pic[i+1][j-1];
          }
          if(i<img.row&&j<img.column&&img.row>=0&&j-1>=0)
          {
            if(img.pic[i][j-1]!=0)
          img.pic[i][j] = img.pic[i][j-1];
          }
          if(i<img.row&&j+1<img.column&&img.row>=0&&img.column>=0)
          {
            if(img.pic[i][j+1]!=0)
          img.pic[i][j] = img.pic[i][j+1];
          }
          if(i<img.row&&j<img.column&&i-1>=0&&img.column>=0)
          {
            if(img.pic[i-1][j]!=0)
          img.pic[i][j] = img.pic[i-1][j];
          }
          if(i<img.row&&j<img.column&&i-1>=0&&j-1>=0)
          {
            if(img.pic[i-1][j-1]!=0)
          img.pic[i][j] = img.pic[i-1][j-1];
          }
          if(i<img.row&&j+1<img.column&&i-1>=0&&img.column>=0)
          {
            if(img.pic[i-1][j+1]!=0)
          img.pic[i][j] = img.pic[i-1][j+1];
          }
          if(img.pic[i][j]==1)
          {
            img.pic[i][j]=cnt;
            if(i+1<img.row&&j<img.column&&img.row>=0&&img.column>=0)
            {
               if(img.pic[i+1][j]!=0)
          img.pic[i+1][j]=cnt;
           }
          if(i+1<img.row&&j+1<img.column&&img.row>=0&&img.column>=0)
          {
            if(img.pic[i+1][j+1]!=0)
          img.pic[i+1][j+1]=cnt;
          }
          if(i+1<img.row&&j+1<img.column&&i>=0&&j-1>=0)
          {
            if(img.pic[i+1][j-1]!=0)
          img.pic[i+1][j-1]=cnt;
         }
           if(i<img.row&&j<img.column&&img.row>=0&&j-1>=0)
           {
            if(img.pic[i][j-1]!=0)
          img.pic[i][j-1]=cnt;
          }
          if(i<img.row&&j+1<img.column&&img.row>=0&&img.column>=0)
          {
            if(img.pic[i][j+1]!=0)
          img.pic[i][j+1]=cnt;
          }
          if(i<img.row&&j<img.column&&i-1>=0&&img.column>=0)
          {
            if(img.pic[i-1][j]!=0)
          img.pic[i-1][j]=cnt;
          }
            if(i<img.row&&j<img.column&&i-1>=0&&j-1>=0)
            {
               if(img.pic[i-1][j-1]!=0)
          img.pic[i-1][j-1]=cnt;
           }
          if(i<img.row&&j+1<img.column&&i-1>=0&&img.column>=0)
          {
            if(img.pic[i-1][j+1]!=0)
          img.pic[i-1][j+1]=cnt;
          }
          cnt++;
          }
      }
     }
     *cn=cnt-2;
     for(int i=0;i<img.row;i++)
     {
        for(int j=0;j<img.column;j++)
        {
         if(img.pic[i][j]!=0)
          img.pic[i][j]--;
        }
     }
     return img;
}  
int main()
{
     struct _IMAGE img,b_img;
     int cnt;
     //Reading input from the user.
     img = read_image();
     
   
     printf("Input Image: \n");
      //Printing input image.
     print_image(img);
     //Finding the boundary image.
     b_img = output_image(img,&cnt);
     printf("Output Image: \n");
     //Printing Boundary image.
     print_image(b_img);
     printf("Number of connected components: %d",cnt);
     return 0;
}