#include<iostream>
#include<string>
using namespace std;
class car
{

private:
    string make;
    string model;
    int year;

public:
 car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    // Method to display car information
    void display_info() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
    
};

int main() {
    // Creating an instance of the Car class
    car myCar("Toyota", "Corolla", 2022);

    // Calling the display_info method to print the car's details
    myCar.display_info();

    return 0;
}
