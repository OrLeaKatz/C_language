#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define SIZE 81

typedef struct Point
{
	double x, y;
};
 
typedef struct Rectangular
{
	Point p1, p2;
};




int  main()
{
	Rectangular rec1 = { {1,2} ,{3,4}};
	printf("rec1:%.2lf,%.2lf,%.2lf,%.2lf", rec1.p1.x, rec1.p1.y,rec1.p2.x,rec1.p2.y);
		

	
	getchar();
	getchar();
}