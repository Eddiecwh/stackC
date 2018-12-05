#include "stack270.c"

int main() {
    int size;
    int choice;
    int num;
    int value;

    printf("Hello and welcome to the stack program!\n");
    printf("What size would you like your size to be: ");
    scanf("%d", &size);
    struct stack270 stack = initStack(size);

    while(1){
        printf("What would you like to do?\n 1. push\n 2. pop\n 3. peek\n 4. dup\n 5. exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("What number would you like to push?\n");
            scanf("%d", &num);
            push(&stack, num);
        } else if (choice == 2) {
            pop(&stack);
        } else if (choice == 3) {
            peek(&stack, &value); 
        } else if (choice == 4) {
            dup(&stack);
        } else if (choice == 5) {
            printf("Bye!\n");
            break;
        } else {
            printf("Sorry, that's not a valid option\n");
        }
    }
}