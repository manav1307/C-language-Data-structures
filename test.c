//inserting a node at beginning
#include <stdlib.h>
#include <stdio.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head;//global variable can be accessed anywhere
void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void print(){
    struct Node* temp = head;
    printf("list is: ");
    while(temp != NULL){

        printf("%d", temp ->data);
        temp = temp -> next;  
    }
    printf("\n");
}; 

int main(){
    head = NULL; //empty list
    printf("how many numbers?\n");
    int n, i, x;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("enter the number \n");
        scanf("%d", &x);
        Insert(x);
        print();

    }

}


