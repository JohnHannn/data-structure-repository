#include<stdio.h>
#include<stdlib.h>
#define MALLOC_EORR "malloc function failed!"
struct node{
  int data;
  struct node *head = (struct node *)malloc(size_of(struct node)); // alloct a node memory for one node
}
