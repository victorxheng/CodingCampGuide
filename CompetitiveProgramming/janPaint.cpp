#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin ("paint.in");
    ofstream fout ("paint.out");
    int a, b, c, d;
    fin >> a >> b >> c >> d;
    int difJohn = b - a;
    int difBessie = d - c;
    int biggerfirst;
    int smallersecond;
    int paintedtogether = difBessie + difJohn;
    if(c >= a){
        biggerfirst = c;
    }
    else{
        biggerfirst = a;
    }
    if(d <= b){
        smallersecond = d;
    }
    else{
        smallersecond = b;
    }
    int overlap  = smallersecond - biggerfirst;
    if(overlap > -1){
        fout << (paintedtogether - overlap);
    }
    else{
        fout << paintedtogether;
    }
    return 0;
}