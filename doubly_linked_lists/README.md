A Doubly Linked List (DLL) contains an extra pointer, typically called the previous pointer, together with the next pointer and data which are there in the singly linked list.



![DLL1](https://user-images.githubusercontent.com/113644952/203550837-e19f8dab-1031-4529-8266-4d00d92ba212.png)


<img width="368" alt="lista doblemente enlazada" src="https://user-images.githubusercontent.com/113644952/203551085-1fe1a573-6758-4b29-a1ee-1e6e24be0d3e.PNG">

Insertion in DLL:
A node can be added in four ways:

At the front of the DLL 
After a given node. 
At the end of the DLL 
Before a given node.
1) Add a node at the front:
The new node is always added before the head of the given Linked List. And newly added node becomes the new head of DLL. For example, if the given Linked List is 1->0->1->5 and we add an item 5 at the front, then the Linked List becomes 5->1->0->1->5. Let us call the function that adds at the front of the list push(). The push() must receive a pointer to the head pointer because the push must change the head pointer to point to the new node (See this)

Below is the implementation of the 5 steps to insert a node at the front of the linked list:

/* Given a reference (pointer to pointer) to the head of a
   list and an int, inserts a new node on the front of the
   list. */
void push(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
 
    /* 2. put in the data  */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head and previous as NULL
     */
    new_node->next = (*head_ref);
    new_node->prev = NULL;
 
    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;
}
