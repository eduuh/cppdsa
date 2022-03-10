#include <iostream>
#include <deque>

using namespace std;

int main() {
  deque<int> dq(10);

  for(int i=0; i<10; i++){
    dq[i] = i * i;
  }


  dq.push_back(10);
  dq.push_front(11);

  for(auto x :dq ) {
    cout << x << " ";
  }

  cout << "\n";
  cout << dq.size() << endl;
}

