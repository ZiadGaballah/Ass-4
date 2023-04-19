#include <iostream>
#include "linkedlist.h"
#include <vector>
using namespace std;


void insertAfter(int x, int y, vector<int> &num1)
{
    for(int i=0;i<num1.capacity();i++)
    {
        if(num1[i]==x)
        {
            
            num1.insert(num1.begin()+num1.at(i),y);
        }
        else
            continue;
    }
}
int main()
{
    vector<int> num;
    int size;
    int a;
    int b;
    int c;
    cout << "Number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
        cout << "Number: ";
        cin >> a;
        num.push_back(a);
    }
    cout << "Number to insert after: ";
    cin >> b;
    cout << "Number: ";
    cin >> c;
    insertAfter(b,c,num);
    
    linkedlist p;
    p.addNode(10);
    p.addNode(20);
    p.addNode(30);
    p.addvectortolist(num);
    cout<< p.sum()<< endl;
    p.display();
    
}
