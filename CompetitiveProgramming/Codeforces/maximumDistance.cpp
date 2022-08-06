//header file lbrary (imports input output)
#include <iostream>
//imports standard library (removable)
//can also do this with variables, which declares multiple ones at once (cin a, b, c, d;)
// to create variables, you can do `int a = 0;`
//cin is basically a scanner
//if you dont have std; imported, you can add std:: to cout.
//if no return 0; at the end
//make strings with `string name = value;`
using namespace std;
// gives you ability to do math easier
#include <cmath>
#include <fstream>

#include <vector>


int main(){
  int n, a, b, max;
  cin >> n;
  vector<int> y(n);
  vector<int> x(n);
  for(int i = 0; i < n; i++){
    cin >> x[i];
      
  }
  for(int i = 0; i < n; i++){
    cin >> y[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j])) > max){
        max = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
      }
    }
    
 }
  cout << max << endl;
  return 0;
  
}