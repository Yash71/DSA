#include <bits/stdc++.h> 
using namespace std;

// priority queue node generation
struct priorityQueue {
  int data;
  int priority;

};
 
priorityQueue pq[10000];
int size = -1;

// enqueue operation: insert the element in the priority queue
void enqueue(int x, int priority) {
  size++;
  pq[size].data = x;
  pq[size].priority = priority;
}

// peek operation : return the element's index with highest priority
int peek() {
  int index = -1;

  int highestPriority = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (pq[i].data > pq[index].data && index > -1 && pq[i].priority == pq[index].priority) {
      highestPriority = pq[i].priority;
      index = i;
    } else if (pq[i].priority > pq[index].priority) {
      highestPriority = pq[i].priority;
      index = i;
    }
  }
  return index;
}

// dequeue operation: remove the element with highest priority
void dequeue() {
  int index = peek();
  for (int i = index; i < size; i++) {
    pq[i] = pq[i + 1];
  }
  size--;
}
int main() {
  enqueue(10, 2);
  enqueue(14, 4);
  enqueue(16, 4);
  enqueue(12, 3);

  int index = peek();
  cout << "Highest priority index is: " << pq[index].data << "\n";
}
