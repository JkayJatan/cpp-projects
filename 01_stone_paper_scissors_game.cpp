#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string choices[3] = {"Stone", "Paper", "Scissors"};
    int userchoice, compchoice;

    // Seed for random number generation
    srand(time(0));
    while (true){
    cout<<"****************************************\n";
    cout << "Stone Paper Scissors Game\n";
    cout << "Enter your choice:\n";
    cout << "0 for Stone\n1 for Paper\n2 for Scissors\n";
    cout << "Your choice: ";
    cin >> userchoice;

    if (userchoice < 0 || userchoice > 2) {
        cout << "Invalid choice!\n";
        }
    else {break;
    }
    }
    // Computer's random choice
    compchoice = rand() % 3;

    cout << "You chose: " << choices[userchoice] << endl;
    cout << "Computer chose: " << choices[compchoice] << endl;

    if (userchoice == compchoice) {
        cout << "It's a Tie!\n";
    } 
    else if ((userchoice == 0 && compchoice == 2) ||
             (userchoice == 1 && compchoice == 0) ||
             (userchoice == 2 && compchoice == 1)) {
        cout << "You Win!\n";
    } 
    else {
        cout << "Computer Wins!\n";
    }

    return 0;
}
