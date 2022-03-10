#include <iostream>

using namespace std;

// you have to pass the n (number of elements) sice the arr[] does not know the sizes of the array
// its just an address.
// size of an address is  8 bytes

void print(int *arr, int n ) { 
  for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
}

// passiing arr to function
void updateArray(int arr[], int i , int val){
  arr[i] = val;
}



int main() {
  //fixed size
  int arr[5] = {1, 5, 4, 3 , 2};        // arr  ->  {1 , 5 , 4 , 3 , 2} == arr is an int pointer : same use int * arr
  //you will not be able to generate inside the array
  int n = sizeof(arr) / sizeof(int);

  updateArray(arr, 1,13);

  //lets show the address of the array
  //actuaal array are updated
  //Address are prited in hexadecimal number
  cout << arr << "\n";
  cout << *(arr+1) << "\n";
  cout << arr+2 << "\n";

  //print out the array
  print(arr, n);


}
