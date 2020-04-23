#include <stdio.h>
#include <conio.h>
 main()
 {int a,b,c;
  float tong;
  printf("Nhap a:");scanf("%d",&a);
  printf("Nhap b:");scanf("%d",&b);
  printf("Nhap c:");scanf("%d",&c);
  tong = a+b+c;
  printf("%.0f",tong);
  printf("\n%f",tong/3);
  getch();
 }
