#include <iostream>
#include <string>

using namespace std;
int main () {
    cout << "Employee Management System" << endl;
    cout << "---------------------------" << endl;
    cout << "Your Information" << endl;
    cout << "-----------------" << endl;

    string firstName, lastName, company, streetAddress, city, state, zipCode, hireYear;
    cout << "First Name: ";
    cin >> firstName;

    cout << "Last Name: ";
    cin>> lastName;
    while (getchar() == '\0'); 

    cout << "Company: ";
    getline(cin, company);

    cout << "Street Address: ";
    getline(cin, streetAddress);

    cout << "City: ";
    getline(cin, city);
    cout << "State: ";
    getline(cin,state);
    cout << "Zip Code: ";
    cin >> zipCode;

    cout << "Hire Year: ";
    cin>> hireYear;
    
    cout << "----------------------------------------" << endl;
    cout <<  "Your Profile" << endl;
    cout << "----------------------------------------" << endl;

    cout << lastName << ", " << firstName << endl;
    cout << company << endl;
    cout << streetAddress << endl;
    cout << city << ", " << state << " " << zipCode << endl;

    cout<< "Your temporary password: " << firstName << "*" << lastName << "%" << hireYear << endl;
    cout << "Congratulation! Your profile has been created." << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Bye!" << endl;

    return 0;

}