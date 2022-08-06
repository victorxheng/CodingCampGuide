#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;

int main(){
  int n, a, b, maxDistance;
  cin >> n;
  vector<int> y(n);
  vector<int> x(n);
  for(int i = 0; i < n; i++){
    cin >> x[i]; 
  }
  for(int i = 0; i < n; i++){
    cin >> y[i];
  }
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      maxDistance = max(maxDistance, ((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j])));
    }
    
 }
  cout << maxDistance << endl;
  return 0;
}