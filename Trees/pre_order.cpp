//recursive approach  
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
void preorder(node* root){
  if(root==NULL) return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);  
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->left=new node(40);
  root->left->right=new node(50);
  root->right->left=new node(60);
  root->right->right=new node(70);
  preorder(root);
}