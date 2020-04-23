#include <stdio.h>
#include <math.h>
int main()
{
float f,x,y,z;
	printf("Nhap vao lan luot 3 so x,y,z theo thu tu nha: \n");
	scanf("%f \n%f \n%f",&x,&y,&z);
	f = ((x+y+z)/(x*x+y*y+1)) - fabs(x-z*(cos(y)));
	printf("\nGia tri cua bieu thuc la: F = %f",f);
return 0;	
}
