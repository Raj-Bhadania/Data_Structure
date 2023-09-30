/*
1)  Creation of Stack
2)  Push Element into Stack
3)  Pop Element from Stack
4)  Traverse through Element of Stack
5)  Size of Stack
6)  Check if Stack is Empty
7)  Check if Stack is Full
*/

# include <stdio.h>
# include <stdlib.h>

# define CAPACITY 5  // Pre-Processor macro


int Stack[CAPACITY];
int top = -1;
// if we pass regular global variable into creation of stack which is also same for array 
// then it will not work

void Push_element_into_Stack(int element);
int Pop_element_from_Stack();
int Peek_Element_of_Stack(void);
void Traverse_Through_Element_of_Stack(void);
int Size_of_Stack();
int Is_Full(void);
int Is_Empty(void);

int main()
{
    int ch;
    while(1)
    {
        printf("\n STACK OPERATIONS \n");
        printf("1. PUSH ELEMENT INTO STACK\n");
        printf("2. POP ELEMENT FROM STACK\n");
        printf("3. PEEK ELEMENT FROM STACK\n");
        printf("4. TRAVERSE THROUGH ELEMENT OF STACK\n");
        printf("5. SIZE OF STACK\n");
        printf("6. CHECK IF STACK IS EMPTY\n");
        printf("7. CHECK IF STACK IS FULL\n");
        printf("8. EXIT\n");

        printf("Enter you choice: ");
        scanf("%d", &ch);

        int Length = 0;
        int element;
        int Poped_element, Peek_element;

        switch(ch){
            case 1: printf("Enter Element value you want to enter: ");
                    scanf("%d", &element);
                    Push_element_into_Stack(element);
                    break; 
            case 2: Poped_element = Pop_element_from_Stack();
                    printf("Element %d got poped\n", Poped_element);
                    break;
            case 3: Peek_element = Peek_Element_of_Stack();
                    printf("Peek element of Stack is: %d", Peek_element);
                    break;
            case 4: Traverse_Through_Element_of_Stack();
                    break;
            case 5: Length = Size_of_Stack();
                    printf("Length of Stack is: %d", Length);
                    break;
            case 6: if(Is_Empty()){printf("Stack is Empty\n");}
                    else{printf("Stack is not Empty\n");}
                    break;
            case 7: if(Is_Full()){printf("Stack is Full\n");}
                    else{printf("Stack is not Full\n");}
                    break;
            case 8: exit(1);

            default: printf("\nInvalid Input\n");
        }
    }
}

void Push_element_into_Stack(int element)
{
    if(Is_Full())
    {
        printf("Insertion is not possible\n");
        printf("Stack is Full\n\n");
    }
    else{
        top++;
        Stack[top] = element;
        printf("%d Inserted into Stack\n", element);
    }
}

int Pop_element_from_Stack(void)
{
    if(Is_Empty())
    {
        printf("Deletion of Element is not possible\n");
        printf("Stack is Empty\n\n");
        return 0;
    }
    else
    {
        return Stack[top];
        top--;
    }
}

int Peek_Element_of_Stack(void)
{
    if(Is_Empty())
    {
        printf("Stack is Empty");
        return 0;
    }
    else
    {
        return Stack[top];
    }
}

void Traverse_Through_Element_of_Stack(void)
{
    int temp = top;
    if(Is_Empty()){
        printf("\nThere is no Element in Stack, Stack is Empty\n");
    }
    else
    {
        while(temp != -1)
        {
            printf("\n%d Element of Stack is:\t%d\n", temp, Stack[temp]);
            temp--;
        }
    }
}

int Size_of_Stack(void)
{
    if(Is_Empty())
    {
        return 0;
    }
    else
    {
        return top+1;
    }
}

int Is_Full(void)
{
    if(top == CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Is_Empty(void)
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}