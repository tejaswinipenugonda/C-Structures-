#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main()
{
   struct Node n1, n2, n3;
   
   n1.data = 10;
   n2.data = 20;
   n3.data = 30;
   
   // Linking
   n1.next = &n2;
   n2.next = &n3;
   n3.next = NULL; // last node
   
   // Traverse using pointer
   struct Node *ptr = &n1;
   while(ptr != NULL){
     printf("%d -> ", ptr->data);
     ptr = ptr->next;
   }
   printf("NULL");
   
   return 0;
}