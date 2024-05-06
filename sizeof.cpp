/*size of oprator Gets its information from c++ include file that are #climits && #cfloats
climits provide information about integral type
cfloats provide informatin about floating point types
=============================================================================================*/

#include <iostream>
#include <climits>
#include <cfloat>
#include <limits>

using namespace std;

int main() {
    int char_min = numeric_limits<char>::min(); // Minimum value of char
    int int_min = numeric_limits<int>::min();   // Minimum value of int
    int char_max = numeric_limits<char>::max(); // Maximum value of char
    int int_max = numeric_limits<int>::max();   // Maximum value of int
    int double_min = numeric_limits<double>::min(); // Minimum value of Double
    int double_max = numeric_limits<double>::max(); // Minimum value of Double
    int float_min = numeric_limits<float>::min(); // Minimum value of char
    int float_max = numeric_limits<float>::max();   // Maximum value of int

    cout << "Size of Information" << endl;
    cout << "================================" << endl;

    cout << "Char: " << sizeof(char) << " bytes" << endl;
    cout << "Int: " << sizeof(int) << " bytes" << endl;
    cout << "Unsigned Int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Short: " << sizeof(short) << " bytes" << endl;
    cout << "Long: " << sizeof(long) << " bytes" << endl;
    cout << "Long Long: " << sizeof(long long) << " bytes" << endl;
    cout << "=============================================\n";
    cout << "Float: " << sizeof(float) << " bytes" << endl;
    cout << "Double: " << sizeof(double) << " bytes" << endl;
    cout << "Long Double: " << sizeof(long double) << " bytes" << endl;
    cout << "================================================\n";
    cout << "Minimum Values:" << endl;
    cout << "Char_Min: " << char_min << endl;
    cout << "Char_Max: " << char_max << endl;
    cout << "Int_Min: " << int_min << endl;
    cout << "Int_Max: " << int_max << endl;
    cout << "Double_Min: " << double_min << endl;
    cout << "Double_Max: " << double_max << endl;
    cout << "Float_Min: " << float_min << endl;
    cout << "Float_Max: " << float_max << endl;


}
