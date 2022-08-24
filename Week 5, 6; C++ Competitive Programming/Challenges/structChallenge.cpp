#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int hours;
    int minutes;

    bool operator<(const Time &other) const{
        return hours < other.hours;
    }
};

int main() {
    int n;
    int hours;
    int minutes;
    cin >> n;

    vector<Time> times;

    while(n--) {
        cin >> hours >> minutes;
        Time t{hours, minutes};

        times.push_back(t);
    }

    sort(times.begin(), times.end());

    for(auto x : times) {
        cout << x.minutes << endl;
    }
}