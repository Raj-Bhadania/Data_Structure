# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* root = NULL;

void Swap_Node(void);
struct node* position_node(int position);
void Display_List(void);

int main()
{

    int i = 0;
    while(i <= 5){
        struct node* temp;
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter the Node data: ");
        scanf("%d", &temp->data);
        temp->link = NULL;
        struct node* p;

        if(root == NULL){
            root = temp;
        }
        else{
            p->link = temp;
        }
        p = temp;
        i++;
    }

    printf("\nData of List Before Swapping\n");
    Display_List();

    Swap_Node();

    printf("\n Data of List after swapping 2 random nodes\n");
    Display_List();

    while(root != NULL){
        struct node* temp = root;
        root = root->link;
        free(temp);
    }
}

void Swap_Node(void)
{
    int pos_1, pos_2;
    printf("\nEnter the two Node location you want to swap: ");
    scanf("%d \t %d", &pos_1, &pos_2);

    struct node *P1_n, *P2_n, *P1_before_n, *P2_before_n;

    P1_before_n = position_node(pos_1);
    P1_n = P1_before_n->link;

    printf("\nOne Before Position-1 Node data is: %d", P1_before_n->data);
    printf("\n Position-1 Node data is: %d", P1_n->data);

    printf("\n");

    P2_before_n = position_node(pos_2);
    P2_n = P2_before_n->link;

    printf("\nOne Before Position-2 Node data is: %d", P2_before_n->data);
    printf("\n Position-2 Node data is: %d", P2_n->data);  

    P1_before_n->link = P2_n;
    P2_before_n->link = P1_n;

    struct node *temp_swap;
    temp_swap = P1_n->link;
    // make sure to give p1n link as if p2n link might be NULL if we try to swap last node
    // that will break link to further nodes

    P1_n->link = P2_n->link;
    P2_n->link = temp_swap;
}

struct node* position_node(int position)
{
    struct node* temp;
    temp = root;

    for(int i=1; i<(position-1); i++){
        temp = temp->link;
    }
    return temp;
}

void Display_List(void){
    struct node* temp;
    temp = root;
    printf("\nData of list is:");
    while(temp != NULL){
        printf("\t%d\t", temp->data);
        temp = temp->link;
    }
}