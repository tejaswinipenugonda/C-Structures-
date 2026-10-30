#include<stdio.h>
#include<string.h>

struct Student {
int rollno;
char name[20];
float marks;
};

int main()
{
struct Student s1;

s1.rollno = 56;
strcpy(s1.name, "teju");
s1.marks = 98;

printf("Roll no = %d\n", s1.rollno);
printf("Name = %s\n", s1.name);
printf("Marks = %f\n", s1.marks);

return 0;

}
