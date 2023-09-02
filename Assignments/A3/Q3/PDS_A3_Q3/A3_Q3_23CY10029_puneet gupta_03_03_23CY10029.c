#include <stdio.h>

int main ()
{
 int x, y ; 
 
 	printf("enter the point p of x coordinate   \n");

 	scanf("%d", &x );
 	printf("enter the point p of y coordinate   \n");
	scanf("%d", &y );
 	if(x==0 && y!=0){printf("point lie on y axis");
}
  	else if(x!=0 &&y==0){printf("point lie on x  axis");
}
  	else if(x==0 &&y==0){printf("point lie on both axis");
}
	else if(x>0 &&y>0){printf("point lie on first quadrient");
}
 	else if(x<0 &&y>0){printf("point lie on fourth quadrient");
} 
 	else if(x>0 &&y<0){printf("point lie on second quadrient");
} 
        else if(x<0 &&y<0){printf("point lie on third quadrient");
  }
  return 0;
}
