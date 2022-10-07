#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    unsigned int countBits(unsigned int n)
    {
        unsigned int count = 0;
        while (n)
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    int binLength(int x)
    {
        return log2(x) + 1;
    }

    int minimizeXor(int num1, int num2)
    {
        int setBits = countBits(num2);
        int otherBits = countBits(num1);
        int length = binLength(num1);
        int diff = setBits - otherBits;

        long long fin = num1;
        if (diff > 0)
        {            
            std::string binary = std::bitset<32>(fin).to_string();
            //cout << binary << endl;
            for(int i = binary.size()-1; i >= 0; i--){
                if(binary[i]=='0'){
                    binary[i]='1';
                    diff--;
                    if(diff <=0) break;
                }                
            }
            //cout << binary << endl;
            unsigned long decimal = std::bitset<32>(binary).to_ulong();
            fin = decimal;

        }
        else if(diff < 0){
            std::string binary = std::bitset<32>(fin).to_string();
            //cout << binary << endl;
            diff = -diff;
            for(int i = binary.size()-1; i >= 0; i--){
                if(binary[i]=='1'){
                    binary[i]='0';
                    diff--;
                    if(diff <=0) break;
                }
            }
            //cout << binary << endl;
            unsigned long decimal = std::bitset<32>(binary).to_ulong();
            fin = decimal;
        }
        return fin;
    }
};