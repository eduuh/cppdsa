#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<string> books;

  books.push("C++");
  books.push("C#");
  books.push("Python");
  books.push("OS");
  
  while(!books.empty()){
    cout << books.top() << " " << endl;
    books.pop();
  }
}
