// itterative approach for preorder traversal
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
void iterative_pre(node * root){
  vector<int> preorder;
  if(root==NULL) return;
  stack<node*> st;
  st.push(root);
  while(!st.empty()){
    root=st.top();
    st.pop();
    preorder.push_back(root->data);
    if(root->right!=NULL) st.push(root->right);
    if(root->left!=NULL) st.push(root->left);
  }
  for(auto it:preorder) cout<<it<<" ";
  cout<<"\n";
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->right=new node(40);
  root->left->left=new node(50);
  root->right->left=new node(60);
  iterative_pre(root);
  return 0;
}