#include<stdio.h>
#include<math.h>
 int TinhXmuN (int x  ,int n);
  main () {
  	int x ,n ;
  do {
  	printf ("nhap vao so nguyen x =") ;
  	 scanf("%d" ,& x) ;
  	printf ("nhap vao so nguyen n =") ;
  	 scanf("%d" , &n);
   if (x,n<=0)
    printf ("yeu cau nhap lai\n ") ;
  } while (x , n<0);
    printf ("\nKet qua =%d" ,TinhXmuN (x , n)) ;
  
    return 0 ;
 }
	int TinhXmuN (int x  ,int n)
	{
	  
	 if (n==0) return 1 ; 
	 else  
	return    ( TinhXmuN (x , n -1)*x );  
	
	
	
	}  
