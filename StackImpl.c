#include <stdio.h>
#include <stdlib.h>

void push(int [], int , int, int*);
void pop(int[], int*);
void display(int [], int);
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int array[size];
    int top = -1;
    int value;
    while (1){
        int choice;
        printf("\n1.Push() .");
        printf("\n2.Pop() .");
        printf("\n3.Display() .");
        printf("\n4.exit() .");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value : ");
                scanf("%d", &value);
                push(array, value, size, &top);
                break;
            case 2:
                pop(array, &top);
                break;
            case 3:
                display(array, top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid value .");
        }
    }
}

void push(int array[], int value, int size, int *top){
    if (*top == size-1){
        printf("OVERFLOW");
        exit(0);
    }
    else{
        *top = *top + 1;
        array[*top] = value;
        if (*top == size -2){
            printf("After one more insertion, OVERFLOW will be happen.");
        }
    }
}

void pop(int array[], int *top){
    if (*top == -1){
        printf("UNDERFLOW");
        exit(0);
    }
    else{
        int deletedValue = 0;
        deletedValue = array[*top];
        *top = *top - 1;
    }
}

void display(int array[], int top){
    while (top != -1){
        printf("%d ", array[top]);
        top = top - 1;
    }
}
