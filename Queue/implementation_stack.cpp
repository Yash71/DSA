// implementation of queue using 2 stack
#include<iostream> 
#include<stack>
using namespace std;
class queue{
  stack<int>*s1,*s2;  
  public:
  queue(){
    s1=new stack<int>;
    s2=new stack<int>;
  }
  void enqueue(int data){
    s1->push(data);
  }
  void dequeue(){
    if(s2->empty()){
      if(s1->empty()){
        cout<<"Queue underflow"<<"\n";
      }
      else{
        while(!s1->empty()){
          s2->push(s1->top());
          s1->pop();
        }
        s2->pop();
      }
    }
    else{
      s2->pop();
    }
  }
  int front(){
    if(s2->empty()){
      if(s1->empty()){
        cout<<"Queue underflow"<<"\n";
        return -1;
      }
      else{
        while(!s1->empty()){
          s2->push(s1->top());
        }
          return s2->top();
      }

    }
    else return s2->top();
  }
  int rear(){
    if(s1->empty()){
      if(s2->empty()){
        cout<<"Queue underflow"<<"\n";
        return -1;
      }
      else{
        while(!s2->empty()){
          s1->push(s2->top());
        }
          return s1->top();
      }

    }
    else return s1->top();
  }
  int size(){
    return s1->size()+s2->size();
  }
  bool empty(){
    return s1->empty() && s2->empty();
  }
};
int main(){
  queue q=queue();
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  cout<<q.front()<<" "<<q.rear()<<"\n";
  q.dequeue();
  cout<<q.front()<<" "<<q.rear()<<"\n";
  q.enqueue(40);
  cout<<q.front()<<" "<<q.rear()<<"\n";

  return 0;
}