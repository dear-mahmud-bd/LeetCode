// https://leetcode.com/problems/majority-element/
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
        // vector<int>nums  = {3,2,3,1,1,6,5,5,5};
        vector<int>nums  = {2,2,1,1,1,2,2};
        map<int, int>mp;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int maxFre=0, mostRep=-1;
        for (auto pair : mp) {
            if(pair.second > maxFre){
                maxFre = pair.second;
                mostRep = pair.first;
            }
        }
        return mostRep;
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