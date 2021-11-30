#include <iostream>
using namespace std;

int main()
{
    int N;
    int i;
    int colonne;
    int spazio;
  
  
    // Chiede un numero positivo e disparo
    do
    {
        cout << "Inserisci il numero di asterischi: ";
        cin >> N;

    } while (0 > N && N % 2 == 0);
    
  // Riga di asterischi dato un Numero
    for (i = 0; i < N; i++)
    {
        cout << "* ";
    }

    cout << endl << endl;
    
  // Quadrato pieno di asterischi
    for (colonne = 0; colonne < N; colonne++)
    {
        for (i = 0; i < N; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl << endl;
  
  // Quadrato con i bordi ma dentro vuoto
    for (colonne = 0; colonne < N; colonne++)
    {
        for (i = 0; i < N; i++)
        {
            if (colonne == 0 || colonne == N - 1 || i == 0 || i == N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << endl << endl;
  
  // Triangolo
    for (colonne = 0; colonne < N + 1; colonne++)
    {
        for (spazio = 0; spazio < N - colonne; spazio++)
        {
            cout << "  ";
        }

        for (i = 0; i < colonne * 2 - 1; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    
    // Rombo
     for (colonne = 0; colonne <= (N + 1) / 2; colonne++)
    {
        for (spazio = 0; spazio <= N / 2 - colonne; spazio++)
        {
            cout << "  ";
        }

        for (i = 0; i < colonne * 2 - 1; i++)
        {
            if (i == 0 || i == colonne * 2 - 2)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
    for (colonne = 1; colonne <= N / 2; colonne++)
    {
        for (spazio = 0; spazio < colonne; spazio++)
        {
            cout << "  ";
        }
        for (i = N - colonne ; i > colonne; i--)
        {
            if (i == colonne + 1 || i == N - colonne)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}
