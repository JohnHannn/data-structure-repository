#include<stdio.h>
#include<stdlib.h>
#define MALLOC_EORR "malloc function failed!"
#define EMPTY_LINKED_LIST "Empty Linked List"
struct node{
  int data;
  struct node *link; // self reference link
};

int node_count(struct node *head-pointer){
  int node-count=0;
  if(head-pointer == NULL){
    printf("%s", EMPTY_LINKED_LIST);
    return node-count;
  }
  while(head-point != NULL){
    count++;
    head-point = head-point->link; // traverse the linked list until the end node
  }
  return node-count;
}

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
