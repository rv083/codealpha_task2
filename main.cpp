#include "SudokuUI.h"
#include "SudokuSolver.cpp"
#include "SudokuSolver.h"
#include "SudokuUI.cpp"
#include "SudokuUI.h"
using namespace std;

int main()
{
    SudokuUI ui;
    char choice;

    while (true)
    {
        system("CLS");
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\033[1;32mWelcome to Sudoku Solver and Player!\033[0m\n"; // Enhanced welcome message with green color
        cout << "\033[1;34mChoose an option:\033[0m\n"; // Blue color

        cout << "\033[1;36m1. Input your own Sudoku puzzle\033[0m\n"; // Cyan color
        cout << "\033[1;36m2. Generate a random Sudoku puzzle\033[0m\n"; // Cyan color
        cin >> choice;

        if (choice == '1' || choice == '2')
        {
            break;
        }
        else
        {
            cout << "\033[1;31mPlease enter a valid choice!\033[0m\n"; // Red color
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            system("pause");
        }
    }

    if (choice == '1')
    {
        ui.playSudoku();
    }
    else if (choice == '2')
    {
        ui.generateAndPlay();
    }

    return 0;
}
