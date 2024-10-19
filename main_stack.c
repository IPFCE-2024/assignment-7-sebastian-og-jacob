#include "stack.h"
#include <stdio.h>

bool test_stack() {
    {
        // Tester om stacken ikke er tom efter initialized
        stack s;
        initialize(&s);
        if (!empty(&s)) {
            return false;
        }
    }
    {
        // Tester om det er den samme efter et pop er det samme som push
        stack s;
        initialize(&s);
        push(1,&s);
        push(2,&s);
        push(3,&s);
        int y=pop(&s);

        if(y!=3){
            return false;
        }

        y = pop(&s);
        if(y!=2){
            return false;
        }

        y = pop(&s);
        if(y!=1){
            return false;
        }
    }
    {
        // Tester hvis man pusher og popper to gange at push og pop er de samme.
        stack s;
        initialize(&s);
        push(1,&s);
        push(2,&s);
        push(3,&s);
        push(4,&s);
        int y=pop(&s);
        int y2=pop(&s);

        if(y!=4 && y2!=3){
            return false;
        }

        y = pop(&s);
        if(y!=2){
            return false;
        }

        y = pop(&s);
        if(y!=1){
            return false;
        }
    }
    return true;
}

int main(){
    if (test_stack){
        printf("Test succeded\n");
    }
    else {
        printf("Test did not succed\n");
    }
    return 0; 
}
