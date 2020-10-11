#include<iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty() || s.length() < 1) return "";
        
        int start = 0;
        int end = 0;

        for(int i=0;i<s.length();i++){
          int len1 = MiddleExpand(s,i,i);
          int len2 = MiddleExpand(s,i,i+1);
          int len = max(len1,len2);

          if(len > end - start){
            start = i - ((len-1)/2);
            end   = i + (len/2);
          }
          
        }
        return s.substr(start,end-start+1);
    }
    int MiddleExpand(string s,int left,int right){
        if(s.empty() || left > right) return 0;

     while(left >= 0 && right < s.length() && s.at(left)==s.at(right)){
           left--;
           right++;
     }
        return right-left-1;
    }
};

int main(){
    string s;
    getline(cin,s);

    Solution sol;
    cout<<sol.longestPalindrome(s);
}