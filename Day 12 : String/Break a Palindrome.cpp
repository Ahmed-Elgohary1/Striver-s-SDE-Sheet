class Solution {
public:
    string breakPalindrome(string pal) {
        int n = pal.size();
        if(n == 1) return "";
        bool f = false;
        for(int i = 0; i < n; ++i){
            if((n & 1) && i == n / 2) continue;
            if(pal[i] != 'a'){
                pal[i] = 'a';
                f = true;
                break;
            }
        } 
        if(f == false){
            pal[n - 1] = 'b';
        }
        return pal;
    }
};
