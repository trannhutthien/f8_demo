#include<stdio.h>
#include<math.h>
#include<conio.h>
 main(){
   int n; 
   float x ,kq ;
    
    printf ("nhap vao mot so nguyen n=");
	  scanf("%d" ,&n) ;
	printf("nhap vao mot so thuc x=");
	  scanf ("%f" ,&x);
	   
	   kq=pow (pow (x,n)+1 ,n);
	   printf ("\nKett qua la =%0.2f" ,kq);
	    
 
 
 
   return 0 ; 
 }
