#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    //Variables
    string userInput = "";

    while (true) {
        //We ask the user
        cout << "What type of number system you want to convert?" << endl;
        cout << "1. Binary" << endl;
        cout << "2. Decimal" << endl;
        cout << "3. Exit" << endl;

        //We recieve the input
        cin >> userInput;

        if (userInput == "1") {
            cout << "What binary number you want to convert to decimal?" << endl;
            cin >> userInput;
            
            //Converts the binary to decimal
            int changedNumber = stoi(userInput, 0, 2);
            
            //Print the result
            cout << "The converted number is " << to_string(changedNumber) << endl;
            cout << "" << endl;
        }

        if (userInput == "2") {
            cout << "What decimal number you want to convert to binary?" << endl;
            int decimalInput;
            cin >> decimalInput;

            //Print the result
            string binaryStr = bitset<32>(decimalInput).to_string();
            binaryStr.erase(0, min(binaryStr.find_first_not_of('0'), binaryStr.size() - 1));
            
            cout << "The converted number is " << binaryStr << endl;
            cout << "" << endl;
        }

        if (userInput == "3") {
            cout << "Goodbye!" << endl;
            break;
        }
    }

    return 0;
}
