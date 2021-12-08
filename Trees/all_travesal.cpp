// all type of traversals using a single stack
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
void print(vector<int> v){
  for(auto it:v)
    cout<<it<<" ";
  cout<<"\n";
}
void alltraversal(node* root){
  stack<pair<node*,int>> st;
  st.push({root,1});
  vector<int> inorder,postorder,preorder;
  if(root==NULL) return;
  while(!st.empty()){
    auto it=st.top();
    st.pop();
    if(it.second==1){
      preorder.push_back(it.first->data);
      it.second++;
      st.push(it);
      if(it.first->left!=NULL){
        st.push({it.first->left,1});
      }
    }
    else if(it.second==2){
      inorder.push_back(it.first->data);
      it.second++;
      st.push(it);
      if(it.first->right!=NULL){
        st.push({it.first->right,1});
      }
    }
    else{
      postorder.push_back(it.first->data);
    }
  }
  print(inorder);
  print(postorder);
  print(preorder);
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  root->right->left=new node(60);
  alltraversal(root);
  return 0;
}