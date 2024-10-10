#include "stack.h"
#include <stdlib.h> /*malloc*/


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
  // implement empty here
  return false;
}

bool full(stack *s) {
  // implement full here
  return false;
}
