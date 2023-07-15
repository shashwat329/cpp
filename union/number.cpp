// Create a union called Number that can hold either an integer or a floating-point number. Write a program to demonstrate the usage of the union by assigning values to both types and displaying their contents.
#include<iostream>
union Number{
    int integer;
    float floatingPoint;
};
int main(){
 Number num;
    num.integer = 10;
    std::cout << "Integer value: " << num.integer << std::endl;

    num.floatingPoint = 3.14;
    std::cout << "Floating-point value: " << num.floatingPoint << std::endl;

    // Accessing the union member that was not assigned recently can lead to undefined behavior
    std::cout << "Integer value after assigning float: " << num.integer << std::endl;

    return 0;
}