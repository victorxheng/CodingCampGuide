#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream fout("mixmilk.out");
  ifstream fin("mixmilk.in");
  int aye, bee, ci, sizea, sizeb, sizec;
  fin >> sizea >> aye >> sizeb >> bee >> sizec >> ci;
  for (int i = 0; i < 100; i++) {
    if (bee + aye <= sizeb) {
      bee += aye;
      aye = 0;
    } else {
      aye -= (sizeb - bee);
      bee = sizeb;
    }
    swap(aye, bee);
    swap(ci, bee);
    swap(sizea, sizeb);
    swap(sizeb, sizec);
  }
  fout << ci << "\n";
  fout << aye << "\n";
  fout << bee << "\n";
  return 0;
}