#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
 int SoBiMat = 0, SoDoan = 0;
 #define MAX 100 
 #define MIN 1
	srand(time(NULL));
	SoBiMat = (rand() % (MAX - MIN + 1) + MIN);
 do 
	{
		printf("\nSo ban doan la bao nhieu: ");
		scanf("%d",&SoDoan);
		{
		if (SoBiMat < SoDoan) printf("Lon hon roi !");
		else if (SoBiMat > SoDoan) printf("Nho hon roi !");
		else printf("\nDung roi !");
	     }
	} 
 while (SoBiMat != SoDoan);
 return 0 ;
}
