#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n - 2, 0);

        for (int i = 0; i < n - 2; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }

        bool f = true;
        int index = -1, ans=0;

        for (int i = 0; i < n - 2; i++)
        {
            if (index == -1 && arr[i] == 1)
                index = i;

            else if (arr[i] == 1)
            {
                if (i - index == 2)
                {
                    f = false;
                    break;
                }
                else
                    index = i;
            }
        }

        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}