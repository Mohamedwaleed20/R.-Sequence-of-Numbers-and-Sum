#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    while(true)
    {
        int a, b;
    cin >> a >> b;
    if(a<=0||b<=0)
    {
        return 0;
    }
    int mx = max({a,b});
    int mn = min({a,b});
    int sum = 0;
    for (int i = mn; i <= mx; i++)
    {
        sum = sum + i;
        cout << i << " ";

    }
    cout << "sum =" << sum  << endl;
    }



    return 0;
}
