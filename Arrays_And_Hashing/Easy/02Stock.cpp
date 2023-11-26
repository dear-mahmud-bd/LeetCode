// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
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
        vector<int>prices  = {2,4,6,1,7};
        int minPrice = prices[0], profit = 0;
        for (int i = 1; i < prices.size(); i++){
            profit = max(profit, prices[i]-minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return profit;
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