#include <iostream>
#include <string>

using namespace std;

int main()
{
    typedef string wordsArr[10];

    for (int i = 0; i < 11; i++)
    {
        cout << "Enter ten strings " << endl;

        cin >> wordsArr[i];
    }
}