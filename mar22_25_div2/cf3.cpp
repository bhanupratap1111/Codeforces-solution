#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        cin >> x>>y;

        int bits = 0;

        for(int i=0;i<32;i++){
            if(x & (1<<i)){
                bits = max(bits,i);
            }
        }

        for(int i=0;i<32;i++){
            if(y & (1<<i)){
                bits = max(bits,i);
            }
        }
        
        if(x == y) cout<< -1 <<endl;
        else cout<<(1 << bits + 1 ) - max(x, y) <<endl;
    }

    return 0;
}