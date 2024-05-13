class Solution {
public:
    int countSubstrings(string& s) {
       return tabulation(s);
    }
    // 3. tabulation
    // time: O(n ^ 2)
    // space: O(n ^ 2)
    int tabulation(string& s) {
        vector<vector<int>> tab(s.size(), vector<int>(s.size()));
        int count = 0;
        for(int L = 1; L <= s.size(); L++) {   //Len=1 , Len=2 ....
            for(int  i= 0; i+L-1 < s.size(); i++) {
                int j=i+L-1;
                if (i == j) {
                    tab[i][j] = 1;
                } else if (i + 1 == j) {
                    tab[i][j] = s[i] == s[j] ? 1 : 0;
                } else {
                    tab[i][j] = s[i] == s[j] ? tab[i+1][j-1] : 0;
                }
                count += tab[i][j];
            }
        }
        return count;
    }
};
