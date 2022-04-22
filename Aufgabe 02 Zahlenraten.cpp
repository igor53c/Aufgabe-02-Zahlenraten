// Aufgabe 02 Zahlenraten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    locale::global(locale("German_germany"));

    int zufallszahl = rand() % 100 + 1;

    int anzahlDerVersuche = 7;

    cout << endl << "Erraten Sie die Zahl zwischen 1 und 100!" << endl;
    cout << endl << "Sie haben 7 Versuche." << endl;

    for (int i = 1; i <= anzahlDerVersuche; i++)
    {
        int nummer;
        cout << endl << "Ihr " << i << ". Versuch: ";
        cin >> nummer;

        if (!(nummer >= 1 && nummer <= 100))
        {
            cout << endl << "Sie haben einen ungültigen Wert eingegeben!" << endl;
            break;
        } 

        if (nummer == zufallszahl)
        {
            cout << endl << "Herzliche Glückwünsche! Sie haben die Zahl erraten!" << endl;
            break;
        }
        else if (i == anzahlDerVersuche)
        {
            cout << endl << "Leider, Sie haben die Zahl nicht erraten." << endl;
            cout << endl << "Die erratene Zahl lautet: " << zufallszahl << endl;
        }
        else if (nummer > zufallszahl)
            cout << endl << "Ihre Zahl ist größer als die angegebene Zahl!" << endl;
        else 
            cout << endl << "Ihre Zahl ist kleiner als die angegebene Zahl!" << endl;
    }
}
