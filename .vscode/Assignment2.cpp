#include <iostream>
#include <curses.h>
//_getch() does not work on these libraries so I had to use system("pause") 
// this should also produce "press any key to continue", which is why I have it commented out.
using namespace std;

void splashScreen ()

{
   // Splash Screen
    system ("cls");
    cout << "\n";
    cout << "$$***WHAT IS UP MCDERRMOTT***$$\n";
    cout << "\t----------\n";
    cout << " I hope you enjoy my program!!\n";
    //cout << "\t\t\tPress any key to continue\n";
    system("pause");
}
void printMyInfo ()

{
    // Print my Info
   cout << "\n";
   cout << "\tHello!!\n";
   cout << "\tMy name is:    Ian Schrader\n";
   cout << "\tMy age is:     17\n";
   cout << "GOODBYE!!\n";
   //cout << "\t\t\tPress any Key to Continue\n";
   system ("cls");
   system("pause");
}
void exitScreen ()
{
    //exit screen 
    system("cls");
    cout << "\n";
    cout << "\t ^^GOODBYE^^\n";
   // cout << "\t\t\tPress any Key to Continue\n";
    system("pause");

}

int main()

{
    splashScreen ();
    printMyInfo ();
    exitScreen ();
    return 0;


}