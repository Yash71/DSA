#include<iostream>
#include<vector>
#include<queue>
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
void levelorder(node* root){
  vector<vector<int>> ans;
  if(root==NULL) return;
  queue<node*> q;
  q.push(root);
  while(!q.empty()){
    int size=q.size();
    vector<int> level;
    for(int i=0;i<size;i++){
      node* current=q.front();
      q.pop();
      if(current->left!=NULL) q.push(current->left);
      if(current->right!=NULL) q.push(current->right);
      level.push_back(current->data);
    }
    ans.push_back(level);
  }
  for(vector<int> i:ans){
    for(int j:i) cout<<j<<" ";
    cout<<"\n";
  }
}
int main(){
  node* root=new node(10);
  root->left=new node(20);
  root->right=new node(30);
  root->left->right=new node(40);
  root->left->left=new node(50);
  root->right->left=new node(60);
  levelorder(root);

  return 0;
}