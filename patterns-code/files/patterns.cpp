#include <iostream>
using namespace std;

int main()
{

    // Pattern 1
    cout << "Pattern - 1\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 2
    cout << "\nPattern - 2\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 3
    cout << "\nPattern - 3\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << j + 1;
        cout << endl;
    }

    // Pattern 4
    cout << "\nPattern - 4\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << i + 1;
        cout << endl;
    }

    // Pattern 5
    cout << "\nPattern - 5\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 6
    cout << "\nPattern - 6\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
            cout << j + 1;
        cout << endl;
    }

    // Pattern 7
    cout << "\nPattern - 7\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 8
    cout << "\nPattern - 8\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < 5 - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 9
    cout << "\nPattern - 9\n";
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < 5 - i - 1; j++)
                cout << " ";
            for (int j = 0; j < 2 * i + 1; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < i - 5; j++)
                cout << " ";
            for (int j = 0; j < 2 * (10 - i) - 1; j++)
                cout << "*";
        }
        cout << endl;
    }

    // Pattern 10
    cout << "\nPattern - 10\n";
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j <= i; j++)
                cout << "*";
        }
        else
        {
            for (int j = 10 - i; j > 0; j--)
                cout << "*";
        }
        cout << endl;
    }

    // Pattern 11
    cout << "\nPattern - 11\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j > 0; j--)
            cout << j % 2;
        cout << endl;
    }

    // Pattern 12
    cout << "\nPattern - 12\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << j + 1;

        for (int j = 0; j < 2 * (4 - i - 1); j++)
            cout << " ";

        for (int j = i + 1; j > 0; j--)
            cout << j;

        cout << endl;
    }

    // Pattern 13
    cout << "\nPattern - 13\n";
    int var = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << var++ << " ";
        cout << endl;
    }

    // Pattern 14
    cout << "\nPattern - 14\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << char('A' + j);
        cout << endl;
    }

    // Pattern 15
    cout << "\nPattern - 15\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
            cout << char('A' + j);
        cout << endl;
    }

    // Pattern 16
    cout << "\nPattern - 16\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << char('A' + i);
        cout << endl;
    }

    // Pattern 17
    cout << "\nPattern - 17\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i - 1; j++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j < i)
                cout << char('A' + j);
            else
                cout << char('A' + 2 * i - j);
        }
        cout << endl;
    }

    // Pattern 18
    cout << "\nPattern - 18\n";
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i - 1; j < 5; j++)
            cout << char('A' + j);
        cout << endl;
    }

    // Pattern 19
    cout << "\nPattern - 19\n";
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = i; j <= 4; j++)
                cout << "*";

            for (int j = 0; j < 2 * i; j++)
                cout << " ";

            for (int j = i; j <= 4; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < i - 5 + 1; j++)
                cout << "*";

            for (int j = 0; j < 2 * (10 - i - 1); j++)
                cout << " ";

            for (int j = 0; j < i - 5 + 1; j++)
                cout << "*";
        }
        cout << endl;
    }

    // Pattern 20
    cout << "\nPattern - 20\n";
    for (int i = 0; i < 9; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j <= i; j++)
                cout << "*";

            for (int j = 0; j < 2 * (5 - i - 1); j++)
                cout << " ";

            for (int j = 0; j <= i; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < 9 - i; j++)
                cout << "*";

            for (int j = 0; j < 2 * (i - 5 + 1); j++)
                cout << " ";

            for (int j = 0; j < 9 - i; j++)
                cout << "*";
        }
        cout << endl;
    }

    // Pattern 21
    cout << "\nPattern - 21\n";
    for (int i = 0; i < 4; i++)
    {
        if (i % 3 == 0)
        {
            for (int j = 0; j < 4; j++)
                cout << "*";
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                if (j % 3 == 0)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    // Pattern 22
    cout << "\nPattern - 22\n";
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i % 6 == 0 || j % 6 == 0)
                cout << "4 ";
            else if (i % 6 == 1 || j % 6 == 1 || i % 6 == 5 || j % 6 == 5)
                cout << "3 ";
            else if (i % 6 == 2 || j % 6 == 2 || i % 6 == 4 || j % 6 == 4)
                cout << "2 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }

    return 0;
}