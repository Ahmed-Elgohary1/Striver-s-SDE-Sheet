
bool comp(vector<int> &a, vector<int> &b)
{
    return (a[0] < b[0] || a[0] == b[0] && a[1] > b[1]);
}

class Solution {
public:
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        int n = properties.size();
        stack<int> st;
        int count = 0;
        
        sort(properties.begin(), properties.end(), comp);
        
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && properties[st.top()][1] < properties[i][1])
            {
                st.pop();
                count++;
            }
            
            st.push(i);
        }
        
        return count;
    }
};
