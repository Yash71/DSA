//itterative postorder traversal using 2 stacks
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct node{
  int data;
  node* left;
  node* right;
  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
void itterative_post1(node* root){
  vector<int> postorder;
  if(root==NULL) return;
  stack<node*> st1,st2;
  st1.push(root);
  while(!st1.empty()){
    root=st1.top();
    st1.pop();
    st2.push(root);
    if(root->left!=NULL) st1.push(root->left);
    if(root->right!=NULL) st1.push(root->right);
  }
  while(!st2.empty()){
    postorder.push_back(st2.top()->data);
    st2.pop();
  }
  for(auto it:postorder) cout<<it<<" ";
  cout<<"\n";
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  root->right->left=new node(60);
  itterative_post1(root);
  return 0;
}