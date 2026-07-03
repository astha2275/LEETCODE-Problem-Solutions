class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int l=0,b=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(b<0){
                b=0;
                l=i;
            }
            if(s[i]=='(') b++;
            else b--;
            if(b==0) ans=max(ans,i-l+1);
        }
        l=n-1;b=0;
        for(int i=n-1;i>=0;i--){
            if(b<0){
                b=0;
                l=i;
            }
            if(s[i]==')') b++;
            else b--;
            if(b==0) ans=max(ans,l-i+1);
        }
        return ans;
    }
};