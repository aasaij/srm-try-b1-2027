#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    char data;
    struct Node *link;
}node;

int main(){
    node *x, *y, *z;
    x = (node *)calloc(1,sizeof(node));
    y = (node *)calloc(1, sizeof(node));
    z = (node *)calloc(1, sizeof(node));
    x->data = 'A';
    x->link = y;
    x->link->data = 'B';
    x->link->link = z;
    x->link->link->data = 'C';
    printf("\n[");
    node* temp;
    for (temp = x;temp->link;temp = temp->link)
    	printf("'%c',", temp->data);
    printf("'%c']", temp->data);
    return 0;
}