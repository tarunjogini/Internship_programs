#include <iostream>
using namespace std;

int main()
{
    int rows,i,j,a[10][10],a1=0,a2=0,n=2;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i = 1;i <= rows; i++)
    {
        a1++;
        a2 = 0;
        for(j = i;j <= rows; j++)
        {
           a2++;
            cout<<j;
            a[a1][a2] = j;
        }
        cout<<endl;
    }
    //cout<<a1<<a2<<endl;
    //cout<<a[2][2];
    for(i = rows-1; i >= 1; --i)
    {
        for(j = 1; j <= n ; j++)
        {
            cout<<a[i][j];  
        }
        n++;
        cout<<endl;
    }
        return 0;
}