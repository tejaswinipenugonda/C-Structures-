#include<stdio.h>
#include<string.h>
struct Date {
  int day;
  int month;
  int year;
};

struct Student {
  char name[20];
  int rollno;
  struct Date dob; 
  float marks;
};

int main()
{
    struct Student s1;
    strcpy(s1.name, "teju"); // FIXED
    s1.rollno = 56;
    s1.dob.day = 4;
    s1.dob.month = 10;
    s1.dob.year = 2008;
    s1.marks = 98;
    
    printf("name:%s\n",s1.name);
    printf("rollno:%d\n",s1.rollno);
    printf("Date of birth:%d/%d/%d\n",s1.dob.day,s1.dob.month,s1.dob.year);
    printf("marks:%f\n",s1.marks);
    
    return 0;
}