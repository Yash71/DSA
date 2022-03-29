

// recursion
// base case: case for terminating the recursion
// self work/implementation of answer
// recursive task/call for other values

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> & ans){
    for(auto it: ans) cout<<it<<" ";
    cout<<"\n";
}
void solve(vector<int> & v,int id,vector<int> & ans){
    if(id==v.size()){
        display(ans);
        return;
    }
    // either the element will be stored or not
    solve(v,id+1,ans);
    ans.emplace_back(v[id]);
    solve(v,id+1,ans);
    ans.pop_back();
}
int main(){
    vector<int> v{1,2,3};
    vector<int> ans;
    int id=0;
    solve(v,0,ans);
    return 0;
}


