#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &perm, int n)
{
    //  Write your code here.
    int k, l;
    vector<int> ans=perm;
    for(k=n-2; k>=0;k--){
        if(ans[k]<ans[k+1])
            break;
    }
    if(k<0)
        reverse(ans.begin(), ans.end());
    else{
        for(l=n-1; l>k;l--){ 
            if(ans[l]>ans[k])
                break;
        }
        swap(ans[l], ans[k]);
        reverse(ans.begin()+k+1, ans.end());
    }
    return ans;

}
