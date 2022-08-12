#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student{
i       char name[50];
        char major[50];
        int age;
        double gpa;

}
int main(){

struct student tx;
tx.age=22;
tx.gpa=3.81;
strcpy(tx.name, "Micheal");
strcpy(tx.major, "Telecommunications");
printf("%d", tx.age);
printf("%s", tx.name);
printf("%s", tx.major);
printf("%f", gpa);


return 0;
}
