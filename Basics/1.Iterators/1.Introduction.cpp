#include <bits/stdc++.h>
#include <vector>
using namespace std;

void interatorOperations() {
   vector<int> ar = { 1 , 2 , 3 , 4 , 5 };
   vector<int>::iterator ptr;

   cout << "The vector elements are" << "\n";
   for(ptr = ar.begin(); ptr != ar.end(); ptr++){
     cout << *ptr << "  ";
   }
}
//Vector
void interatorsVerbose() {
    vector<int> v1 = {1, 2,3 , 4, 5, 6 , 7 , 8 , 9 , 10};
    // This iterator will only work with vector<int>
    // The iterator work just like pointers
    vector<int>::iterator it; //interator object

    vector<int>::iterator ibegin = v1.begin();
    vector<int>::iterator iend = v1.end();

    for(it = ibegin; it < iend; ++it) {
        cout << *it << "\n";
    }
}

void interatorWithAuto() {
    
    vector<int> v1 = {1, 2,3 , 4, 5, 6 , 7 , 8 , 9 , 10};
     //more preffered wayt to define them
     auto ibegin = v1.begin();
     auto iend = v1.end();
    for(auto it = ibegin; it < iend; ++it) {
        cout << *it << "\n";
    }
}


void advanceInterator() {
    
    vector<int> v1 = {1, 2,3 , 4, 5, 6 , 7 , 8 , 9 , 10};
     //more preffered wayt to define them
     auto ibegin = v1.begin();
     advance(ibegin, 6); // will point to 7
     cout << "The position of interator after advancing is :" << "\n";
     cout << *ibegin << "\n";
}
void nextandprev(){
    vector<int> v1 = {1, 2,3 , 4, 5, 6 , 7 , 8 , 9 , 10};
    vector<int>::iterator ptr = v1.begin();
    vector<int>::iterator ftr = v1.end();

    //using next() to return new iterator
    //points to 4
    auto it = next(ptr, 3);
    //Using prev() t return new iterator
    //points to 3
    auto it1 = prev(ftr, 3);
}






int main(int argc, const char** argv) {
    interatorsVerbose();
    cout << "With auto: Iterators" << "\n";
    interatorWithAuto();
    interatorOperations();
    advanceInterator();
    nextandprev();
    
    //input interator: This is the simplest form of iterator
    return 0;
}
