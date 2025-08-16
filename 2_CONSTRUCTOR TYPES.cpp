#include<iostream>
#include<string>
using namespace std;

class car {
    public:
    int speed;
    string name, fuel, car_no;

    car() {
        name = "notset";
        speed = 0;
        car_no = "notset";
        fuel = "notset";
    }

    car(string n, int s, string no, string f) {
        name = n;
        speed = s;
        car_no = no;
        fuel = f;
    }

    car(const car &c) {
        name = c.name;
        speed = c.speed;
        car_no = c.car_no;
        fuel = c.fuel;
    }

    void setdata(string n, int s, string no, string f) {
        name = n;
        speed = s;
        car_no = no;
        fuel = f;
    }

    void display() {
        cout<<"\ncar name : "<<name;
        cout<<"\ncar no : "<<car_no;
        cout<<"\nspeed : "<<speed;
        cout<<"\nfuel : "<<fuel<<"\n";
    }
};

int main() {
    car c1;
    cout<<"\ndefault constructor";
    c1.display();

    car c2("swift",120,"mh12ab1234","petrol");
    cout<<"\nparameterized constructor";
    c2.display();

    car c3(c2);
    cout<<"\ncopy constructor";
    c3.display();

    car c4;
    c4.setdata("baleno",140,"mh14xy9876","diesel");
    cout<<"\nusing member function setdata()";
    c4.display();

    return 0;
}
