#include <iostream>
using namespace std;

int main() {

const int DollarValue{100};
const int QuaterValue{25};
const int DimeValue{10};
const int NickleValue{5};

int Cents{};

cout << "Enter amount of cents: ";
cin >> Cents;

int Balance{}, Dollars{}, Quaters{}, Dime{}, Nickle{}, Penny{};

Dollars = Cents / DollarValue;
Balance = Cents - (Dollars * DollarValue);

Quaters = Balance / QuaterValue;
Balance -= Quaters * QuaterValue;

Dime = Balance / DimeValue;
Balance -= Dime * DimeValue;

Nickle = Balance / NickleValue;
Balance -= Nickle * NickleValue;

Penny = Balance;

cout << "\nYour Change is as follows: " << endl;

cout << "Dollars: " << Dollars << endl;
cout << "Quaters: " << Quaters << endl;
cout << "Dime: " << Dime << endl;
cout << "Nickle: " << Nickle << endl;
cout << "Penny: " << Penny << endl;

return 0;


}
