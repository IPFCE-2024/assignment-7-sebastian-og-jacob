#include "stack.h"
#include <stdlib.h> /*malloc*/
#include <stdbool.h>


void initialize(stack *s) {
  // Sætter stack til at være tom
  s->head = NULL;
}

void push(int x, stack *s) {
  // Laver ny node der har x som data
  node *n = malloc(sizeof(node));
  n->data = x;
  // Nye element peger på gamle head
  n->next = s->head;
  // Nye node bliver sat som head
  s->head = n;
}

int pop(stack *s) {
  // Flytter node som skal poppes over i ny node
  node* n = s->head;
  // head for stacken bliver sat til forrige element
  s->head = n->next;
  // Returnerer dataen fra den poppede node
  return n->data;
}

bool empty(stack *s) {
  // Returnerer sand hvis head er NULL
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
