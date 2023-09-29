# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* root = NULL;

void Swap_Node(void);

int main(){

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
    struct node* temp;
    temp = root;
    printf("Data of list is:");
    while(temp != NULL){
        printf("\t%d\t", temp->data);
        temp = temp->link;
    }
    Swap_Node();
}

void Swap_Node(void)
{
    int pos_1, pos_2;
    printf("\nEnter the two Node location you want to swap: \t");
    scanf("%d \t %d", &pos_1, &pos_2);
    struct node* temp;
    temp = root;
    for(int i =1; i<pos_1; i++){
        temp = temp->link;
    }
    temp = root;
    printf("%d Node Data is; %d\n", pos_1, temp->data);
    for(int i=1; i<pos_2; i++){
        temp = temp->link;
    }
    printf("%d Node Data is: %d\t", pos_2, temp->data);

}