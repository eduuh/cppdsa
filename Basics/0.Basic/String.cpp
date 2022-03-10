#include <bits/stdc++.h>
#include <cstring>
#include <string>
using namespace std;

#define endl "\n";

int main(int argc, const char** argv) {

    char greeting[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

    const string sclass = string("H00034");

    char str1[10] = "edwin";
    char str2[10];

    auto subtring = sclass.substr(1, sclass.length() -1);
    cout << subtring << endl;
    int convertedfromstring = stoi(subtring);
    cout << convertedfromstring << " " << endl;
    strcpy(str2, str1);
    cout << str2 << '\n';
    cout << greeting << endl;


    cout << "Range based for loop " << endl;
    for(auto t:sclass){ 
      cout << t << " ";
    }

    cout << str1 << " " << greeting;
    return 0;
}

