class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
    
        unordered_map<int,int>frq;
        stack<int>st;
        int cur;
        for(int num:nums1)
            frq[num]=-1;
        
        for(int i=0;i<nums2.size();i++)
        {
            cur=nums2[i];
            
            while(!st.empty()&&st.top()<cur)
            {
                int val=st.top();
                st.pop();
                frq[val]=cur;
                
            }
            
            if(frq.find(cur)!=frq.end())
                st.push(cur);
        }
        
        for(int i=0;i<nums1.size();i++) {
            nums1[i]=frq[nums1[i]];
        }
        
        return nums1;
        
    }
};
