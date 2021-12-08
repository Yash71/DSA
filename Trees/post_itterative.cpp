// itterative post order traversal in trees
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
void itterative_post(node* root){
  vector<int> postorder;
  if(root==NULL) return;
  stack<node*>st;
  node* current=root;
  while(current!=NULL || !st.empty()){
    if(current!=NULL){
      st.push(current);
      current=current->left;
    }
    else{
      node* temp=st.top()->right;
      if(temp==NULL){
        temp=st.top();
        st.pop();
        postorder.push_back(temp->data);
        while(!st.empty() && temp== st.top()->right){
          temp=st.top();
          st.pop();
          postorder.push_back(temp->data);
        }
      }
      else current=temp;
    }
  }
  for(auto it: postorder) cout<<it<<" ";
  cout<<"\n";
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->right=new node(40);
  root->left->left=new node(50);
  root->right->left=new node(60);
  itterative_post(root);
  return 0;
}