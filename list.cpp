#include <iostream>
#include "list.h"
using namespace std;
List::List()
{

        HEAD=NULL;
        TAIL=NULL;
}

List::~List()
{}

bool List::isEmpty()
{
    return HEAD ==NULL;
}
void List::addToHead(int data)
{
    // Create a new node
    Node *new_node =new Node();
    new_node ->info =data;

    new_node ->next=HEAD;
    HEAD = new_node;
    if (TAIL == NULL)
        TAIL=HEAD;
    }

    void List::addToTail(int data)
    {
        Node *new_node =new Node();
        new_node ->info =data;
        new_node -> next =NULL;
        TAIL ->next = new_node;
        TAIL=new_node;
    }
    bool List::retrive(int data, Node *outputptr)
    {
        Node *p=HEAD;
        while(p!=NULL && p->info!= data)
        {
            p=p->next;
        }
        if (p==NULL)
        return false;
        else
            outputptr=p;
        return true;
    }
   void List::add(int data, Node *predecessor)
   {
       Node *new_node =new Node();
       new_node-> info =data;
       new_node -> next =predecessor -> next;
       predecessor-> next =new_node;
   }
   void List:: removefromHead()
   {
       Node *nodetodelete=HEAD;
       HEAD=nodetodelete->next;
       delete nodetodelete;
   }
   void List:: traverse()
{
    Node *temp=HEAD;
    while(temp!=NULL){
        cout<<temp->info;
        temp=temp->next;
    }

}
int main()
{
    Node *pre;
    List l;
    l.addToHead(5);
    l.addToHead(6);
    l.addToHead(7);
    l.removefromHead();
    l.retrive(5,pre);
    l.add(6,pre);
    l.traverse();
}
