#include<stdio.h>
#include<string.h>

struct Student{
  char name[20];
  int rollno;
  float marks;
};

int main()
{
   struct Student s1;
   struct Student *ptr;
   ptr = &s1; // ptr points to s1
   
   // Assign using pointer
   strcpy(ptr->name, "teju");
   ptr->rollno = 56;
   ptr->marks = 98;
   
   // Print using pointer
   printf("name:%s\n", ptr->name);
   printf("rollno:%d\n", ptr->rollno);
   printf("Marks:%f\n", ptr->marks);
     
   return 0;
}