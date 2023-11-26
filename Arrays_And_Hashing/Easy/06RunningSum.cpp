// https://leetcode.com/problems/running-sum-of-1d-array/description/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
const int MOD = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution{
    public:
    void functionName() { 
        // vector<int>nums  = {1,2,3,4};
        // vector<int>nums  = {1,1,1,1,1};
        vector<int>nums  = {3,1,2,10,1};
        for (int i = 1; i < nums.size(); i++){
            nums[i] = nums[i]+nums[i-1];
        }
        for (int i = 0; i < nums.size(); i++){
            cout<<nums[i]<<" ";
        }
        return ;
    } 
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        Solution ob;
        // cout<<ob.functionName()<<"\n";
        ob.functionName();
    }
    return 0;
}