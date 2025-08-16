#include<iostream>
#include<string>
using namespace std;

class car {
    public:
    int speed;
    string fuel, name, car_no;

    car() {
        cout<<"constructor called\n";
    }

    ~car() {
        cout<<"destructor called\n";
    }

    void insertdata() {
        cout<<"enter car name : ";
        cin>>name;
        cout<<"enter speed : ";
        cin>>speed;
        cout<<"enter car no : ";
        cin>>car_no;
        cout<<"enter fuel : ";
        cin>>fuel;
    }

    void display() {
        cout<<"\ncar name : "<<name;
        cout<<"\ncar no : "<<car_no;
        cout<<"\nspeed : "<<speed;
        cout<<"\nfuel : "<<fuel<<"\n";
    }
};

int main() {
    car n;
    n.insertdata();
    n.display();
    return 0;
}
