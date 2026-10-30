#include<stdio.h>
#include<string.h>
struct Student{
  char name[20];
  int rollno;
  float marks;
};
int main()
{
   struct Student s[3];
   for(int i=0;i<3;i++){
     printf("Enter name for student %d: ", i+1);
     scanf("%s",s[i].name);
     printf("Enter rollno: ");
     scanf("%d",&s[i].rollno); // FIXED HERE
     printf("Enter marks: ");
     scanf("%f",&s[i].marks);
   }
   
   printf("\n--- Students List ---\n");
   for(int i=0;i<3;i++){
     printf("name:%s\n",s[i].name);
     printf("rollno:%d\n",s[i].rollno);
     printf("Marks:%f\n\n",s[i].marks);
   }  
     
    return 0;
}