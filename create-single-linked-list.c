#include<stdio.h>
#include<stdlib.h>
#define MALLOC_EORR "malloc function failed!"
struct node{
  int data;
  struct node *link; // self reference link
};

int main(){
  struct node *head = NULL
  head = (struct node *)malloc(size_of(struct node)); // alloct a node memory for one node
  if (head == NULL){
    printf("%s", MALLOC_EORR);
    return 0;
  }
  head -> data = 45;
  head -> link = NULL;
  
  struc node *current = NULL;
  current = (struct node *)malloc(size_of(struct node)); // alloct a node memory for one node
  if (current == NULL){
    printf("%s", MALLOC_EORR);
    return 0;
  }
  head->link = current; // first node point to the second node;
  current->data = 3;
  current->link = NULL; // end of a linked list
  
  current = (struct node *)malloc(size_of(struct node)); // alloct a node memory for one node
  current->data = 90;
  head->link->link = current; 
  
  return 0;
}
