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

        vector<int> arr1, arr2;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr1.push_back(a);
        }

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr2.push_back(a);
        }

        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[arr1[i]] = i;
        }

        int cnt = 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int index = arr2[i];

            while(arr1[index - 1] != 0){
                cnt++;
                int j = arr1[index - 1];
                if(arr1[index - 1] == index) break;
                arr1[index - 1] = 0;
                index = j; 
            }
            ans.push_back(cnt);
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}