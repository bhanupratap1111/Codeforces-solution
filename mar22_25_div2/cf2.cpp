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

        vector<int> arr;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0) cnt++;
        }

        if(cnt == 0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }

        else if(arr[0] == 0 && arr[n-1] == 0){
            cout<<3<<endl;
            cout<<1<<" "<<n-2<<endl;
            cout<<2<<" "<<3<<endl;
            cout<<1<<" "<<2<<endl;
        }

        else if(arr[0] == 0){
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
        }

        else if(arr[n-1] == 0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
        }

        else{
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<2<<endl;
        }


    }

    return 0;
}