#include <iostream>

using namespace std;

class Chair {
    // these variables are private
    int numberOfLegs;
    string personOnChair;
    int durability;
    int* chairData;


    public:
        // create a constructor
        Chair(int legs, string& person, int strength)
            : numberOfLegs(legs),
              personOnChair(person),
              durability(strength) 
        {
                for(int i = 0; i < legs; i++){
                    chairData[i] = 0;
                }
        }
        
        // create a destructor
        ~Chair()
        {
            delete[] chairData;
        }

        // friend function to print the chair data
        friend ostream& operator<<(ostream& out, const Chair& c);

};

// friend function to print the chair data
ostream& operator<<(ostream& out, const Chair& c)
{
    out << "Chair has " << c.numberOfLegs << " legs and is " << c.durability << " strong." << endl;
    out << "Person on chair is " << c.personOnChair << endl;
    out << "Chair data is: ";
    for(int i = 0; i < c.numberOfLegs; i++){
        out << c.chairData[i] << " ";
    }
    out << endl;
    return out;
}

int main()
{
    string person = "John";
    Chair c(4, person, 10);
    string person2 = "Remy";
    Chair c2(4, person2, 1000);
    cout << c;
    return 0;
}

class Table{
    int durability;
    Table(int strength) : durability(strength){

    }
    ~Table(){
        
    }
};