#include <iostream>
using namespace std;
void reverse(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= row; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    reverse(5);
    return 0;
}