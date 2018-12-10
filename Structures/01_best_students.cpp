#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 20

typedef struct student
{ 
	int id;
	char name[n];
	float avg;
};

void best_students(student *A_class)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		if (A_class[i].avg >= 90 )
			printf("%s\n", A_class[i].name);
	}
}
void main()
{
	student A_class[5];
	A_class[0] = { 1,"matan",56};
	A_class[1] = { 2,"or",90 };
	A_class[2] = {3,"mor",86};
	A_class[3] = { 4, "tal", 60};
	A_class[4] = { 5,"gal", 96};

	best_students(A_class);

	getchar();
}