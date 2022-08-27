#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool checkPrime(long long number){
    if(number < 2) return false;
    else if(number == 2) return true;
    else if(number % 2 == 0) return false;

    long long limit = sqrt(number);    
    for(int j=3; j <= limit; j+=2){
        if(number%j==0) return false;
    }
    return true;
}

int main()
{
    long long n, c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        long long root = sqrt(c);
        if(root*root == c && checkPrime(root)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }        
    }
}
