/*  1) How to append Node at end of list
    2) How to add Node at beginning of list 
    3) How to add after specified Node 
    4) How to Delete first Node
    5) How to Delete Specified Node
    6) How to Display all Nodes
    7) How to find length of Linked List
    8) How to Reverse Linked List
    9) How to Swap 2 Nodes
    10) How to Short Nodes in Linked List */

# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* root = NULL;

void Append_node_to_list(void);
int Length_of_list(void);
void Add_Node_to_Beginning(void);
void Display_Linked_list(void);
void Add_Node_After_Specified_Node(void);

int main()
{

    int ch;
    while(1){
       printf("Single Linked List Operations : \n");
       printf("1.Append Node to List\n");
       printf("2.Add Node to Beginning of List\n");
       printf("3.Find Length of List\n");
       printf("4.Display Elements of Linked List\n");
       printf("5.Add Node After Specified Location\n");
       printf("11.Quit\n");

       printf("Enter your choice :");
       scanf("%d", &ch);
       int Length = 0;

       switch(ch){
            case 1: Append_node_to_list();
                    break;
            case 2: Add_Node_to_Beginning();
                    break;
            case 3: Length = Length_of_list();
                    printf("Length of List is: %d\n\n\n", Length);
                    break;
            case 4: Display_Linked_list();
                    break;
            case 5: Add_Node_After_Specified_Node();
                    break;
            case 11: exit(1);
            
            default: printf("Invalid input\n\n");

       }
    }
}

void Append_node_to_list(void){

    struct node* temp;

    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter The Node Data:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }  
}

int Length_of_list(void)
{
    int count = 0;
    struct node* p;
    p = root;

    while(p != NULL){
        p = p->link;
        count++;
    }
    return count;
}

void Add_Node_to_Beginning(void)
{

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter The Node Data:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if(root == NULL){
        root = temp;
    }
    else{
        temp->link = root;
        root = temp;
    }
}

void Display_Linked_list(void)
{
    struct node* temp;
    int count = 1;
    temp = root;
    while(temp != NULL){
        printf("%d Element of list is: %d\n", count, temp->data);
        count++;
        temp = temp->link;
    }
    printf("\n");
}

void Add_Node_After_Specified_Node(void)
{
    int position;
    int length;
    length = Length_of_list();
    if(length == 0){
        printf("Linked List is Empty, Please create list first");
    }
    else{
        printf("Location number must be less than %d and greater than 1\n", length);
        printf("Enter the position at you want to insert node:");
        scanf("%d", &position);
        struct node* temp;
        temp = root;
        struct node* new_node;
        new_node = (struct node*)malloc(sizeof(struct node*));
        printf("Enter The Node Data:");
        scanf("%d", &new_node->data);
        new_node->link = NULL;
        int i = 1;
        while(i<=position){
            temp = temp->link;
            i++;
        }
        new_node->link = temp;
        temp->link = new_node;
    }
}