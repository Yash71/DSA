#include<iostream>
#include<stack>
#include<vector>
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
void itterative_in(node* root){
  stack<node*> st;
  node* current=root;
  vector<int> inorder;
  while(true){
    if(current!=NULL){
      st.push(current);
      current=current->left;
    }
    else{
      if(st.empty()) break;
      current=st.top();
      st.pop();
      inorder.push_back(current->data);
      current=current->right;
    }
  }
  for(auto it:inorder) cout<<it<<" ";
  cout<<"\n";
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  root->right->left=new node(60);
  itterative_in(root);
  return 0;
}