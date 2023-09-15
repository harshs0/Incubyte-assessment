#include <bits/stdc++.h>
using namespace std;

int x, y, z;

char D, D1;

void comfoward()
{

    if (D1 == 'N')
        y++;
    else if (D1 == 'S')
        y--;
    else if (D1 == 'W')
        x--;
    else if (D1 == 'E')
        x++;
    else
        z++;
}

void combackward()
{
    if (D1 == 'N')
        y--;
    else if (D1 == 'S')
        y++;
    else if (D1 == 'W')
        x++;
    else if (D1 == 'E')
        x--;
    else
        z--;
}

void comleft()
{
    if (D1 == 'N')
        D1 = 'W';
    else if (D1 == 'S')
        D1 = 'E';
    else if (D1 == 'W')
        D1 = 'S';
    else if (D1 == 'E')
        D1 = 'N';
    else
    {
        if (D == 'N')
            D1 = 'W';
        else if (D == 'S')
            D1 = 'E';
        else if (D == 'W')
            D1 = 'S';
        else if (D == 'E')
            D1 = 'N';
    }
}

void comright()
{
    if (D1 == 'N')
        D1 = 'E';
    else if (D1 == 'S')
        D1 = 'W';
    else if (D1 == 'W')
        D1 = 'N';
    else if (D1 == 'E')
        D1 = 'S';
    else
    {
        if (D == 'N')
            D1 = 'E';
        else if (D == 'S')
            D1 = 'W';
        else if (D == 'W')
            D1 = 'N';
        else if (D == 'E')
            D1 = 'S';
    }
}

void comup()
{
    if (D1 != 'U' && D1 != 'D')
    {
        D = D1;
    }
    D1 = 'U';
}

void comdown()
{
    if (D1 != 'U' && D1 != 'D')
    {
        D = D1;
    }
    D1 = 'D';
}

int main()
{

    cout << "Enter the Initial Cordinates" << endl;
    cin >> x >> y >> z;
    cout << "Enter the initial Direction in capitals like (N,S,E,W) : ";
    cin >> D1;

    D = 'N';
    if (D1 != 'U' && D1 != 'D')
        D = D1;

    vector<char> commands;
    cout << "Enter the command like (f,b,l,r,u,d) , Enter 1 to stop : ";
    char a;
    while (a != '1')
    {
        cin >> a;
        commands.push_back(a);
    }

    for (int i = 0; i < commands.size(); i++)
    {
        if (commands[i] == 'f')
            comfoward();
        if (commands[i] == 'b')
            combackward();
        if (commands[i] == 'l')
            comleft();
        if (commands[i] == 'r')
            comright();
        if (commands[i] == 'u')
            comup();
        if (commands[i] == 'd')
            comdown();
    }

    cout << "New Cordinates are : (" << x << " ," << y << " ," << z << ")" << endl;

    cout << "New Direction is : " << D1 << endl;

    return 0;
}