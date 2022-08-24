#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int nTn(string s);

map<string, int> an_years = {
    {"Ox", 1},
    {"Tiger", 2},
    {"Rabbit", 3},
    {"Dragon", 4},
    {"Snake", 5},
    {"Horse", 6},
    {"Goat", 7},
    {"Monkey", 8},
    {"Rooster", 9},
    {"Dog", 10},
    {"Pig", 11},
    {"Rat", 12}};

map<string, pair<string, int>> cows;

int main()
{

    string firstName, code, animal, secondName, garb;
    int n, compareTo;

    int newYear;

    cin >> n;

    cows["Bessie"] = make_pair("Ox", 0);

    while (n--)
    {
        cin >> firstName >> garb >> garb >> code >> animal >> garb >> garb >> secondName;

        if (code == "previous")
        {
            if (an_years[animal] < nTn(secondName))
            {
                newYear = (nTn(secondName) - an_years[animal]) * -1;
            }
            else
            {
                newYear = (12 - (an_years[animal] - nTn(secondName))) * -1;
            }
        }

        else if (code == "next")
        {
            if (nTn(secondName) < an_years[animal])
            {
                newYear = an_years[animal] - nTn(secondName);
            }
            else
            {
                newYear = 12 - (nTn(secondName) - an_years[animal]);
            }
        }

        cows[firstName] = make_pair(animal, cows[secondName].second + newYear);
    }

    cout << abs(cows["Elsie"].second);
}

int nTn(string s)
{
    return an_years[cows[s].first];
}