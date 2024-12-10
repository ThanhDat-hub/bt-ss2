#include <stdio.h>
int main(){
	int a = 4;
	int b = 4 ;
	int sum,differenc,product;float quotient;
	sum = a + b;
	differenc= a-b;
	product= a*b;
	quotient = (float)a/b;
	// In ra ket qua
	printf("tong cua %d va %d la: %d\n",a,b,sum );
	printf("tich cua %d va %d la: %d\n",a,b,product );
	printf("thuong cua %d va %d la:%d\n",a,b,quotient );
	return 0; 
} 
