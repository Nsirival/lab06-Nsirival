#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"
#include <iostream>
using namespace std;

void addIntToEndOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer

  // TODO:
  // (1) Allocate a new node.  p will point to it.
  p = new Node;

  // (2) Set p's data field to the value passed in
  p->data = value;
  // (3) Set p's next field to NULL
  p-> next = NULL;
  if (list->head == NULL)
  {

    // (4) Make both head and tail of this list point to p
    list -> head = p;
    list -> tail = p;
  }
  else
  {

    // Add p at the end of the list.
    Node * current = list->head;
    while(current -> next != nullptr){
      current = current -> next;
    }
    // (5) The current node at the tail? Make it point to p instead of NULL
    current-> next = p;
    
    // (6) Make the tail of the list be p now.
    list->tail = p;
  }
}

void addIntToStartOfList(LinkedList *list, int value)
{
  assert(list != NULL); // if list is NULL, we can do nothing.

  // Add code for this.
  // HINT:
  // consider all edge cases such as when list->head is or is not null AND
  // consider all edge cases such as when list->tail is or is not null.
  // Visualizing the problem with a box and pointer diagram can help.
  Node* new_node = new Node();
    new_node->data = value;
 
    // Make the new node point to the current head
    new_node->next = (list->head);
 
    // Update the head to point to the new node
    list->head = new_node;
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element
// If more than one element has largest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMax(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
  assert(list != NULL);
  assert(list->head != NULL);
  Node*temp = list->head;
  for(Node * n = list->head; n != nullptr; n = n-> next){
    if(n->data > temp->data){
      temp = n;
    }
  }
  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return temp;
  // TODO: Insert code here to calculate and return
  //   value of pointer to max element (first one if ties.)
  
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.
// You may assume list has at least one element
// If more than one element has smallest value,
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node *pointerToMin(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);
  Node*temp = list->head;
  for(Node * n = list->head; n != nullptr; n = n-> next){
    if(n->data < temp->data){
      temp = n;
    }
  }
  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return temp; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list)
{

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);
  Node*temp = list->head;
  for(Node * n = list->head; n != nullptr; n = n-> next){
    if(n->data > temp->data){
      temp = n;
    }
  }
  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return temp -> data; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  assert(list->head != NULL);
  Node * temp = list->head;
  for(Node * n = list->head; n != nullptr; n = n-> next){
    if(n->data < temp-> data){
      temp = n;
    }
  }
  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return temp->data; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList *list)
{
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list != NULL);
  int sum = 0;
  for(Node*n = list-> head; n != nullptr; n = n->next){
    sum += n-> data;
  }
  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return sum; // STUB!  Replace this line with correct code
}
