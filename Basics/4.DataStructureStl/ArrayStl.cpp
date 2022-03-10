#include <iostream>
#include <array>
#include <algorithm>

using namespace std;



void updateArray(array<int, 6> &arr, int i , int val) {
   arr[i] = val;
}


//you can pass the array by value
//to ensure that the value is not changed by using const parameter.
//The function will access the array in readonly mode.
void print(const array<int, 6> &arr) {
      int n = arr.size();
      for(int i = 0; i < n ; i++){
          cout << arr[i] << " ";
      }
}

int main() {

  // object => all stl container are passed by value
  // The actual array is not changed
  // To change the actual value you need to pass the array by reference
  // The object in memory has a two names
  // the object in memory has an alias
  
  array<int, 6> arr = { 1, 222,3, 6, 7 , 8 };
  arr[0] = 100;
  updateArray(arr, 3, 20);


  //Sort
  //stl container have the concept of interators
  sort(arr.begin(), arr.end());

  // Intialize an array with all zeros 
  array<int , 10> fives;
  fives.fill(5);

  // simplifies the iterations
  for(int value : fives) {
    cout << value << " ";
  }
  cout << "\n";

  print(arr);

  return 0;
}
