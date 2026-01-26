#include <iostream>
#include <cstring>
using namespace std;

class car {
private:
    float price;

public:
    int model_no;
    char* name;
    const int msp;

    // Default constructor
    car() : msp(99999) {
        price = 0;
        model_no = 0;
        name = NULL;
    }

    // Parameterized constructor
    car(float p, int m, const char* n, int minsellprice = 99999)
        : price(p), model_no(m), msp(minsellprice) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy constructor
    car(const car& x) : msp(x.msp) {
        cout << "Inside copy constructor" << endl;
        price = x.price;
        model_no = x.model_no;
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
    }

    // Assignment operator
    void operator=(const car& x) {
        if (this != &x) {
            price = x.price;
            model_no = x.model_no;
            delete[] name;
            name = new char[strlen(x.name) + 1];
            strcpy(name, x.name);
        }
    }

    void setprice(float p) {
        price = p;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Model No: " << model_no << endl;
        cout << "Price: " << price << endl;
        cout << "MSP: " << msp << endl;
    }

    ~car() {
        cout << "Destroy car " << (name ? name : "unknown") << endl;
        if (name != NULL) {
            delete[] name;
        }
    }
};

int main() {
    car c(10000, 23, "BMW");  // parameterized constructor
    cout << "MSP: " << c.msp << endl;

    car d = c; // copy constructor
    d.name[0] = 'A'; // change name to demonstrate deep copy
    d.setprice(400000);

    cout << "\nCar C details:\n";
    c.print();

    cout << "\nCar D details:\n";
    d.print();

    car* e = new car(15000, 24, "Audi");
    cout << "\nCar E details:\n";
    e->print();

    delete e;

    cout << "\nHello World!\n";
}
