#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    print1(n);

    return 0;
}