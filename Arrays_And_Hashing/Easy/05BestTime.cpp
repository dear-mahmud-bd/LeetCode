// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
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
        // vector<int>prices = {7,1,5,3,6,4};
        // vector<int>prices = {1,2,3,4,5};
        vector<int>prices = {7,6,4,3,1};
        int maxProfit = 0, n = prices.size();
        for (int i = 1; i < n; i++){
            if(prices[i-1] < prices[i]){
                maxProfit += prices[i]-prices[i-1];
            }
        }
        return maxProfit;
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