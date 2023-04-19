#ifndef linkedlist_h
#define linkedlist_h
#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node()
    {
        val=0;
        next=0;
        
    }
    node(int x)
    {
        this->val=x;
        this->next=0;
    }
};
class linkedlist
{
private:
    node* head;
public:
    linkedlist()
    {
        head=0;
    }
    void addNode(int y)
    {
        node* addedNode= new node(y);
        if(head==0)
        {
            head=addedNode;
            return;
        }
        node* temp= head;
        while(temp->next !=0)
        {
            temp=temp->next;
        }
        temp->next=addedNode;
    }
    void deleteNode(node *head)
    {
        if(head !=0)
        {
            if(head->next== 0)
            {
                head=0;
            }
            else
            {
                node* temp= head;
                while(temp->next->next != 0)
                {
                    temp=temp->next;
                }
                node* end= temp->next;
                temp->next=0;
                free(end);
                
            }
        }
    }
    void display()
    {
        while(head!=0)
        {
            cout << head->val << endl;
            head=head->next;
        }
    }
    node addVector(vector<int> num)
    {
        for(int i=0;i<num.capacity();i++)
        {
            addNode(num[i]);
        }
        return *head;
    }
    int sum()
    {
        node* pointer= head;
        int total=0;
           while(pointer!= 0)
           {
               total+=pointer->val;
               pointer=pointer->next;
           }
        
        return total;
    }
};

#endif /* linkedlist_h */
