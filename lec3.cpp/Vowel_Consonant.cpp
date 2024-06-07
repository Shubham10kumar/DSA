#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any Charater : ";
    cin >> ch;
    if ((int)ch >= 97 && (int)ch <= 122 || (int)ch >= 65 && (int)ch <= 90)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else
    {
        cout << "Not Alphabet";
    }

    return 0;
}