#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin >> n;
        vector<int> arr(n,0);
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i] = a;
            mp[a]++;
        }

        int sz = mp.size(), l = 0, r = 0;

        for(int i=0;i<n;i++){
            int j = i;
            while(j<n && mp[arr[j]] == 1){
                j++;
            }

            if(j-i > r-l){
                l = i;
                r = j;
            }

            i = j;
        }
        
        if(n - sz == 0) cout<<1<<" "<<n;
        else if(sz == 1 || (l == 0 && r == 0)) cout<<0;
        else cout<<l+1<<" "<<r;
        cout<<endl;
        
    }

    return 0;
}