#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n>>k;
        string s;

        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            s.push_back(c);
        }
        
        reverse(s.begin(),s.end());
        string r = s;
        reverse(s.begin(),s.end());

        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        if(mp.size() == 1) cout<<"no";

        else if(r > s) cout<<"yes";

        else if(k == 0) cout<<"no";

        else cout<<"yes";

        cout<<endl;
    }

    return 0;
}