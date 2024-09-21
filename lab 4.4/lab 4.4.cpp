#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{
    double y, x, Xpoc, Xkinc, Xkrok;
    cout << "Xpoc = "; cin >> Xpoc;
    cout << "Xkinc = "; cin >> Xkinc;
    cout << "Xkrok = "; cin >> Xkrok;

    x = Xpoc;  // Ініціалізація x значенням Xpoc

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    while (x <= Xkinc)
    {
        if (x <= -4)
        {
            y = -2;
        }
        else
        {
            if (-4 < x && x <= 0)
                y = x / 4;
            else if (0 < x && x <= 2)
                y = x * x;
            else
                y = 5 - (1.0 / 2.0) * x; 

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += Xkrok;
    }

    cout << "---------------------------" << endl;
    return 0;
}
