#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main(){
  struct Node* head = NULL;
head=(struct Node*)malloc(sizeof(struct Node));
head-> data=10;
head-> next=NULL;
printf("Data: %d\n", head->data);
struct Node* current = (struct Node*)malloc(sizeof(struct Node));
current-> data=20;
current-> next=NULL;
/* 
 * Use the arrow operator because `head` is a pointer to a struct, not the struct itself.
 * `->` accesses a member through a pointer and is equivalent to `(*head).next`.
 * Here, it assigns the `next` link of the node pointed to by `head` to `current`.
 */
head-> next=current; 
current=(struct Node*)malloc(sizeof(struct Node));
current-> data=30;
current-> next=NULL;
head-> next-> next=current;
printf("Linked List: ");
current = head;
while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
}
return 0;
}