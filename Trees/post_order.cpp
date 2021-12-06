#include<iostream>
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
void post_order(node* root){
  if(root==NULL) return;
  post_order(root->left);
  post_order(root->right);
  cout<<root->data<<" ";
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  root->right->left=new node(60);
  post_order(root);
  return 0;
}