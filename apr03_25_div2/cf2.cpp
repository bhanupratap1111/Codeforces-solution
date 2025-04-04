#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n,k;
        long long x;
        cin >> n>>k>>x;
        vector<int> arr;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        long long ans = n*k;

        long long cnt = 0, sum = 0;
        for(int i=0;i<n;i++){
            sum+= arr[i];
        }

        while(x > sum && cnt <= (long long)n*k){
            cnt+= n;
            x-= sum;
        }

        int i = n-1;
        if(cnt < (long long)n*k){
            while(x > 0){
                cnt++;
                x-= arr[i];
                i--;
            }
        }

        if(cnt >= (long long)n*k && x > 0){
            cout<<0<<endl;
        }
        else{
            cout<<(long long)n*k - cnt + 1<<endl;
        }
    }

    return 0;
}