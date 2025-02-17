#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin >> n;

        string s;
        for(int i=0;i<n;i++){
            char a;
            cin>>a;
            s.push_back(a);
        }

        int op = 0;
        char prev = '0';


        for(int j=0;j<n;j++){
            if(s[j] != prev){
                op++;
            }

            prev = s[j];
        }

        cout<<op<<endl;

    }

    return 0;
}