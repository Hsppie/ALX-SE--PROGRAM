#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person{

	char name[50];
	int citNo;
	float salary;
}person1;

int main()
{
	/*assigning name to person1*/
	strcpy(person1.name, "Micheal");
	/*assigning citNo to person1*/
	person1.citNo = 20;
	/*assigning salary to person1*/
	person1.salary = 12000;
	
	printf("Name: %s\n", person1.name);
	printf("CitizenshipNumber: %d\n",person1.citNo);
	printf("Salary: %.2f\n",person1.salary);


	return 0;
}
