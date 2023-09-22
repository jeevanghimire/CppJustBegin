#include <bits/stdc++.h>
using namespace std;

int main()
{
    char character;
    cout << "Enter the character: " << endl;
    scanf("%c",&character);
    if (character == 'm' || character== 'M')
    {
        cout << "Male" << endl;
    }
    else if (character == 'f' || character == 'F')
    {
        cout << "Female" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}