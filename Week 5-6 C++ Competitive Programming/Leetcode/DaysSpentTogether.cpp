#include <bits/stdc++.h>

using namespace std;

int convert(string s){
    int months[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month = stoi(string(1,s[0])+s[1]);
    int day = stoi(string(1,s[3])+s[4]);
    int daysFromMonth = day;
    for(int i = 0; i < month; i++){
        daysFromMonth += months[i];
    }
    cout << daysFromMonth << endl;
    return daysFromMonth;
}

int main()
{
    string arriveAlice,  leaveAlice,  arriveBob,  leaveBob;
    cin >> arriveAlice >> leaveAlice >> arriveBob >> leaveBob;

    int aa = convert(arriveAlice), la = convert(leaveAlice), ab = convert(arriveBob), lb = convert(leaveBob);
    
    vector<int> days(365,0);
    for(int i = aa; i != la; i++){
        if(i > 365) {
            i = 1;
            if(i==la) break;
        }
        days[i-1]++;
        if(i == la -1) days[i]++;
        if(i == 365 && la == 1) days[0]++;
    }
    for(int i = ab; i != lb; i++){
        if(i > 365) {
            i = 1;
            if(i==lb) break;
        }
        cout << "ab: " << i << endl;
        days[i-1]++;
        if(i == lb -1) days[i]++;
        if(i == 365 && lb == 1) days[0]++;
    }

    int overlap = 0;
    
    for(int i = 0; i < 365; i++){
        if(days[i]==2) overlap++;
    }
    cout << overlap;
    return overlap;

    return 0;
}