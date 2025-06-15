#include<iostream>
#include<vector>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int x)
    {
        data = x;
        next = NULL;
    }
};



ListNode *reverseList(ListNode* head) {
    ListNode *curr=head;
    ListNode *prev=NULL;
    while(curr){
        ListNode *nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}





int main()
{
    ListNode *head=new ListNode(10);
    ListNode *temp1=new ListNode(20);
    ListNode *temp2 =new ListNode(30);
    ListNode *temp3 =new ListNode(40);
    ListNode *temp4 =new ListNode(50);
   *reverseList(head);
   
   




    return 0;
}