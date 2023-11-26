// https://leetcode.com/problems/find-pivot-index/
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
    int functionName() { 
        vector<int>nums  = {1,7,3,6,5,6};
        // vector<int>nums  = {1,2,3};
        // vector<int>nums  = {2,1,-1};
        // vector<int>nums  = {-1,-1,0,1,1,0};
        vector<int>leftSum,rightSum;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            leftSum.push_back(sum);
            sum += nums[i];
        }
        sum = 0;
        for (int i = nums.size()-1; i >=0 ; i--){
            rightSum.push_back(sum);
            sum += nums[i];
        }
        reverse(rightSum.begin(), rightSum.end());
        for (int i = 0; i < nums.size(); i++){
            if(leftSum[i] == rightSum[i]){
                return i;
            }
        }
        return -1;
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
        cout<<ob.functionName()<<"\n";
        // ob.functionName();
    }
    return 0;
}