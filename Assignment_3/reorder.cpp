#include<bits/stdc++.h>
using namespace std;
 
class Node {
    
    public:
        int data;
        Node *next;
};
 

void rearrange(Node* head)
{
    if (head == NULL) 
        return;
 
   
    Node *prev = head, *curr = head->next;
 
    while (curr) 
    {
        
        
        if (prev->data > curr->data)
            swap(prev->data, curr->data);
 
        
        
        if (curr->next && curr->next->data > curr->data)
            swap(curr->next->data, curr->data);
 
        prev = curr->next;
 
        if (!curr->next)
            break;
        curr = curr->next->next;
    }
}
 

void push(Node** head, int k)
{
    Node* tem = (Node*)malloc(sizeof(Node));
    tem->data = k;
    tem->next = *head;
    *head = tem;
}
 
void display(Node* head)
{
    Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}
 


int main()
{
 
    Node* head = NULL;
    push(&head, 7);
    push(&head, 3);
    push(&head, 8);
    push(&head, 6);
    push(&head, 9);
 
    rearrange(head);
 
    display(head);
 
    return 0;
}