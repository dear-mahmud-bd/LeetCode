// https://leetcode.com/problems/move-zeroes/description/
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
        vector<int> nums = {0,1,0,3,12};
        int nonZero=0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[nonZero], nums[i]);
                // nums[nonZero]=nums[i];
                // if(nonZero != i) nums[i]=0;
                nonZero++;
            }
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