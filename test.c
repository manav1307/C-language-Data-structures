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



// int main()
// {
//     int a = 10;
//     a  =  fun1(a);
//     printf("%d", a);
// }

// int fun1(int a)
// {
//     int b = 5;
//     b = b+a;
//     return b;
// }

// int main() {
   
//    int i,j,n;
//    printf("please enter the integer:");
//    scanf("%d", &n);

//    for(i=1; i <= n; i++){

//       for(j=1; j <= i; j++){
//          printf("*");
//       }
//       printf("\n");
//    }
  
//    return 0;
// }
  



 // int i, space, rows, k = 0, count = 0, count1 = 0;
   // printf("Enter the number of rows: ");
   // scanf("%d", &rows);
   // for (i = 1; i <= rows; ++i) {
   //    for (space = 1; space <= rows - i; ++space) {
   //       printf("  ");
   //       ++count;
   //    }
   //    while (k != 2 * i - 1) {
   //       if (count <= rows - 1) {
   //          printf("%d ", i + k);
   //          ++count;
   //       } else {
   //          ++count1;
   //          printf("%d ", (i + k - 2 * count1));
   //       }
   //       ++k;
   //    }
   //    count1 = count = k = 0;
   //    printf("\n");
   // }