#include<bits/stdc++.h>

using namespace std;
 
class Node
{
   public:
    int data;
    Node *link;
};
 
Node *newNode(int data)   //Function to create a node
{
    Node *temp = new Node;
    temp->data = data;
    temp->link = NULL;
    return temp;
}
 
void printList(Node *head)  //Function to print NodeList
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    cout << endl;
}
 
void detectAndRemoveLoop(Node *head)     //Detecting and Removing Loop in LinkedList
{
    Node *slow = head;
    Node *fast = head->link;
 
    while (fast && fast->link)       //Searching for a loop
    {
        if (slow == fast)
            break;
        slow = slow->link;
        fast = fast->link->link;
    }
 
    if (slow == fast)    //Loop exist
    {
        slow = head;
        while (slow != fast->link)
        {
            slow = slow->link;
            fast = fast->link;
        }
 
        fast->link = NULL;    //Removing Loop
    }
}
 
int main()
{
    Node *head = newNode(50);
    head->link = newNode(20);
    head->link->link = newNode(15);
    head->link->link->link = newNode(4);
    head->link->link->link->link = newNode(10);
 
    /* Create a loop for testing */
    head->link->link->link->link->link = head->link->link;
 
    detectAndRemoveLoop(head);
 
    printf("Linked List after removing loop \n");
    printList(head);
 
    return 0;
}