#include<iostream>
#include<unordered_set>
using namespace std;
struct node{
  int data;
  node* next;
  node(int d){
    data=d;
    next=NULL;
  }
}; 
// approach 1 (Changing pointers)
bool isLoop(node* head){
  node* tempnode=new node(0);
  node* current=head;
  while(current!=NULL){
    if(current->next==NULL) return false;
    if(current->next==tempnode) return true;
    node* curr_nxt=current->next;
    current->next=tempnode;

    current=current->next;
  }
  return false;
}
// approach 2: (hashing)
bool isLoop_hashing(node* head){
  unordered_set<node*> s;
  for(node* current=head;current!=NULL;current=current->next){
    if(s.find(current)!=s.end())return true;
    s.insert(current);
  }
  return false;
}
// approach 3: (Floyd Cycle Detection)
bool floyd_cycle_detection(node* head){
  node* slow=head, *fast=head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast) return true;
  }
  return false;
}
int main() 
{ 
	node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
  if(isLoop_hashing(head))
    cout<<"Loop found";
  else cout<<"No Loop";
	return 0;
} 