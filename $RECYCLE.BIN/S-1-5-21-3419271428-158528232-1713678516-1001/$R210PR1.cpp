#include<stdio.h>

int TinhXmuN(int x, int n);

int main()
{
	int x,n;
	do{
		printf("Nhap so nguyen x=");
		 scanf("%d",&x);
	    printf("\nNhap so nguyen n=");
		 scanf("%d",&n);
	    if(x,n<=0) 
		printf("yeu cau nhap lai\n");
	}while(x,n<0);
	printf("\nKet qua:%d",TinhXmuN (x,n) );
	return 0;
	
	
}
	int TinhXmuN(int x, int n)
	{
     if(n==0) return 1;
     else return (TinhXmuN(x,n-1)*x);
    }
 
	
	
	

