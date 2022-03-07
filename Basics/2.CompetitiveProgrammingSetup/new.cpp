#include <algorithm>
#include <bits/stdc++.h>
#include <bits/types/clock_t.h>
#include <climits>
#include <cstdint>
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

#define int long long int
#define F first;
#define S second;
#define pb push_back

void solve() {
  int n;
  cin >> n;
  int a[n];
  for(int i =0; i<n; i++){
    cin >> a[i];
  }
  reverse(a,a+n);

  for (int i = 0;  i<n ; i++)
  {
     cout << a[i] << " ";
  }
  cout << '\n';
}

int32_t main(int32_t argc, const char** argv) {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t z = clock();

    int t = 1;
    cin >> t;
    int n = 1e5;
    while(t--) solve(); 
      
    cerr << "Run Time :" << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;

}





