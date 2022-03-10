#include <iostream>
#include <queue>


class Compare {
  public:
      bool operator()(int a, int b) {
         return a < b; 
      }
};

using namespace std;

int main(){
  int arr[] =  { 10, 15, 20 , 13 , 6 , 90 };

  // default is a max heap
  priority_queue<int> heap;

  // min heap : using inbuild comparitor
  priority_queue<int, vector<int> , Compare >  minheap;

  for(int x : arr) {
    heap.push(x);
    minheap.push(x);
  }

  while(!heap.empty()){
     cout << heap.top() << endl;
     heap.pop();
  }

  cout << "Min heap:" << endl;

  while(!minheap.empty()){
     cout << minheap.top() << endl;
     minheap.pop();
  }
}
