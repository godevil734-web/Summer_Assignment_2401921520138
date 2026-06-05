class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        int i=0;
        int j=n-1;
        while(j>i)
        {   while( j>i && !isalnum(s[i]))
          { 
            i++;
          }   
             while( j>i&&!isalnum(s[j]))
          { 
            j--;
          }  
            if(tolower(s[i]) != tolower(s[j]) )
            {
                return false;
            }
            i++;
            j--;
        }
        return true ;
    }
};
