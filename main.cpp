#include <iostream>
#include <cstdlib>     // For rand(), srand()
#include <ctime>       // For time()
using namespace std;

// Function to convert numeric choice to string
string getChoiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissor";
        default: return "Invalid";
    }
}

// Function to determine winner
string determineWinner(int user, int computer) {
    if (user == computer)
        return "It's a Draw!";
    else if ((user == 1 && computer == 3) || 
             (user == 2 && computer == 1) || 
             (user == 3 && computer == 2))
        return "You Win!";
    else
        return "Computer Wins!";
}

int main() {
    int userChoice, computerChoice;

    // Seed random number generator
    srand(time(0));

    cout << "======= Rock Paper Scissor Game =======\n";
    cout << "1. Rock\n2. Paper\n3. Scissor\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid input. Please enter 1, 2, or 3.\n";
        return 1;
    }

    // Random choice for computer
    computerChoice = rand() % 3 + 1;

    // Display choices
    cout << "You chose: " << getChoiceName(userChoice) << endl;
    cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

    // Determine winner
    cout << "Result: " << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}
