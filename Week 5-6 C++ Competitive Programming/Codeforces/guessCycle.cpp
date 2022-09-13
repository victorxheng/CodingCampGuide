#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, y, b = 2;
    while(true){    
        cout << "? 1 " << b << endl; 
        flush(cout); 
        cin >> x;
        cout << "? " << b  << " 1"<< endl; 
        flush(cout);
        cin >> y;
        
        if(x == 0) break;
        else if(x == -1){
            cout << "! " << b-1 << endl;
            break;
        }
        else if(x != y){
            cout <<"! " << x + y << endl;
            break;
        }     
        else{
            b++;
        }
    }

    return 0;
}