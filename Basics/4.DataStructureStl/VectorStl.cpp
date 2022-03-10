#include<vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> first;

  vector<int> second(4,20);
  int numbers[] = { 10 , 20 , 30 , 40};
  vector<int> third(numbers, numbers + 4);
  vector<int> fourth(third);

  vector<int> fifth = { 1, 2 , 3 , 4 , 40 };

  //you can assess the index unless the index is within the capacity
  fifth.push_back(10);

  for(int value: fifth){
    cout << value << "  ";
  }


  vector<int> v;
  v.reserve(100);
  int n;
  cin>> n;

  for(int i = 0; i<n ; i++){
    int no;
    cin >>no;
    v.push_back(no);
    cout << "Capacity: " << v.capacity() << "Size : " << v.size() << endl;
  }

  for(int x : v){
    cout << x << " ";
  }
}
