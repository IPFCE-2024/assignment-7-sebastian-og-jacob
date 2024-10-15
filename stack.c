#include "stack.h"
#include <stdlib.h> /*malloc*/
#include <stdbool.h>


void initialize(stack *s) {
  s->head = NULL;
}

void push(int x, stack *s) {
  node *n = malloc(sizeof(node));
  n->data = x;
  n->next = s->head;
  s->head = n;
}

int pop(stack *s) {
  node* n = s->head;
  s->head = n->next;
  return n->data;
}

bool empty(stack *s) {
  return s->head == NULL;
}

bool full(stack *s) {
  // implement full here. Dette gælder i teorien ikke for netop stacken, 
  // men for hele programmet. For da er alt memory brugt op. Det må være løsningen da vi bruger en dynamisk liste.
  node *temp = malloc(sizeof(node));
  bool return_val = temp == NULL;
  free(temp);
  return return_val;

}
