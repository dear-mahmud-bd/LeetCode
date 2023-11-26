// https://leetcode.com/problems/two-sum/description/
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
    vector<int> functionName() { 
        // vector<int>nums = {2,7,11,15};
        // int target = 9;
        vector<int>nums = {3,2,4};
        int target = 6;
        // vector<int>nums = {3,3};
        // int target = 6;


        /* 
        // Brute force... ->  O(n^2)
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1}; 
        */


        /* 
        // Complixity ->  O(nlog(n))
        vector<pair<int, int>> pr;
        for (int i = 0; i < nums.size(); i++){
            pr.push_back({nums[i],i});
        }
        sort(pr.begin(), pr.end());
        int l=0, r=nums.size()-1;
        while (l<r){
            if(pr[l].first + pr[r].first == target) break;
            else if(pr[l].first + pr[r].second > target) r--;
            else l++;
        }
        cout<<"["<< pr[l].second << "," << pr[r].second <<"]\n";
        return {pr[l].second, pr[r].second};
        */


        // Optimal ->  O(n)    
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size(); i++){
            if( mp.find(target-nums[i]) != mp.end() ){
                cout<<"["<< i << "," << mp[target-nums[i]] <<"]\n";
                return {i, mp[target-nums[i]]};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1}; ; 
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