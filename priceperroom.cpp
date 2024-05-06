/*Prompt the use to enter the number of rooms
Display the number of rooms
Display Price Per Room 
Display Cost (Number Of rooms* Price Per Room)
Display Tax (Number of Rooms* Price Per Room* Tax rate)
Display Total Estimate (Number Of Rooms* Price Per Room) + (Number of Rooms * Price Per Room * Tax Rate)
--------------------------------------------------------------------------------------------------------*/

/*#include <iostream>
using namespace std;

int main() {

         int Number_of_Rooms {0};
         const double Price_Per_Room {500.00};
         const double Tax_Rate {0.16};
         const int Estimate_Expiry {30};

    cout << "Hello Welcome to Franks Carpet Cleaning Service!" << endl;
    cout << "\nHow Many Rooms Would You Like Cleaned?" << endl;
    cout << "Number of Rooms: ";       
    cin >> Number_of_Rooms;
    cout << "\nEstimate For Carpet Cleaning Services: " << endl;   
    cout << "Price Per Room is: Ksh" << Price_Per_Room << endl;
    cout <<"Your Estimate Price Per Room is:Ksh" << Number_of_Rooms * Price_Per_Room << endl;
    cout <<"===================================================" << endl;
    cout << "Tax Rate is: Ksh " << Tax_Rate << endl;
    cout << "Total Price Tax Inclusive:Ksh"<< (Number_of_Rooms * Price_Per_Room) +(Number_of_Rooms * Price_Per_Room * Tax_Rate) << endl;
    cout << "This Estimate is Valid For " << Estimate_Expiry << endl;

}
**/

#include <iostream>
using namespace std;

int main() {
    int num1, num2 {0};

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int highest = max(num1, num2);
    int lowest = min(num1, num2);

    cout << "The highest number is: " << highest << endl;
    cout << "The lowest number is: " << lowest << endl;

    return 0;
}