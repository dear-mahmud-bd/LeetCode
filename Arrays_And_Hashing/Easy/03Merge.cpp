// https://leetcode.com/problems/merge-sorted-array/description/
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
        vector<int> nums1 = {1,2,3,0,0,0};
        int m = 3;
        vector<int> nums2 = {2,5,6};
        int n = 3;
        // int i=m-1, j=n-1, k=m+n-1;;
        // while(i>=0 && j>=0){
        //     if(nums1[i] > nums2[j]){
        //         nums1[k] = nums1[i];
        //         k--, i--;
        //     }else{
        //         nums1[k] = nums2[j];
        //         k--, j--;
        //     }
        // }
        // while (i>=0){
        //     nums1[k] = nums1[i];
        //     k--, i--;
        // }
        // while (j>=0){
        //     nums1[k] = nums2[j];
        //     k--, j--;
        // }
        for (int i=0, j=m; i < m; i++){
            nums1[j]=nums2[i];
            j++;
        }
        sort(nums1.begin(), nums1.end());
        for (int i = 0; i < m+n; i++){
            cout<<nums1[i]<<" ";
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