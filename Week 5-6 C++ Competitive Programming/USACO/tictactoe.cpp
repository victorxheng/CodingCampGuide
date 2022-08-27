//CREDIT: AARON
#include <bits/stdc++.h>

using namespace std;
 
char tTTBorad[3][3];
int oneCowWin(char cow)
{
  // Diagonals
  if (tTTBorad[0][0] == cow && tTTBorad[1][1] == cow && tTTBorad[2][2] == cow || tTTBorad[0][2] == cow && tTTBorad[1][1] == cow && tTTBorad[2][0] == cow) {
    return 1;
  }
  // Columns
  for (int i=0; i<3; i++) {
    if (tTTBorad[0][i] == cow && tTTBorad[1][i] == cow && tTTBorad[2][i] == cow || tTTBorad[i][0] == cow && tTTBorad[i][1] == cow && tTTBorad[i][2] == cow){
        return 1;
    }
  }
  return 0; 
}
 
bool threeInARow(char cow1, char cow2, char a, char b, char c) 
{
  if (a != cow1 && a != cow2 || b != cow1 && b != cow2 || c != cow1 && c != cow2 || a != cow1 && b != cow1 && c != cow1 || a != cow2 && b != cow2 && c != cow2){
    return false;
  }
  return true;
}
 
int twoCowWin(char cow1, char cow2)
{
  // Diagonals
  if (threeInARow(cow1, cow2, tTTBorad[0][0], tTTBorad[1][1], tTTBorad[2][2]) || threeInARow(cow1, cow2, tTTBorad[0][2], tTTBorad[1][1], tTTBorad[2][0])){
    return 1;
  } 
  // Columns
  for (int i = 0; i < 3; i++) {
    if (threeInARow(cow1, cow2, tTTBorad[0][i], tTTBorad[1][i], tTTBorad[2][i]) || threeInARow(cow1, cow2, tTTBorad[i][0], tTTBorad[i][1], tTTBorad[i][2])){
        return 1;
    }
  }
  return 0; 
}
 
int main(){
  ifstream fin ("tttt.in");
  ofstream fout ("tttt.out");
  
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      fin >> tTTBorad[i][j];
    }
  }
  int answer1 = 0, answer2 = 0;
  for (char cow = 'A'; cow <= 'Z'; cow++){ 
    answer1 += oneCowWin(cow);
  }
  for (char cow1 = 'A'; cow1 <= 'Z'; cow1++) {
    for (char cow2 = cow1+1; cow2 <= 'Z'; cow2++){ 
      answer2 += twoCowWin(cow1, cow2);
    }
  }
  fout << answer1 << "\n" << answer2 << "\n";
  return 0;
}