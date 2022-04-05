// count substring of size k with only 1s from a binary string
#include<iostream>
#include<string>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int count1s;
    for(int i=0;i<k;i++){
        if(s[i]=='1') count1s++;
    }
    int ans;
    ans= count1s==k ? 1 : 0;
    for(int i=1;i<s.length();i++){
        count1s=count1s-(s[i-1]-'0')+(s[i+k-1]-'0');
        if(count1s==k) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
