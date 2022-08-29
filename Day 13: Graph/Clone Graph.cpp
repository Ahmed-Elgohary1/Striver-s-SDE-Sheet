/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
   
    Node* dfs(Node* cur, unordered_map<Node*,Node*> &frq)
    {
        vector<Node*>surround;
        Node* sup_colne=new Node(cur->val);
        frq[cur]=sup_colne;
        
        for(auto it:(cur->neighbors))
        {
          if(frq.find(it)!=frq.end())
              surround.push_back(frq[it]);
          else
             surround.push_back(dfs(it,frq));
        }
            sup_colne->neighbors=surround;
        return sup_colne;
    }
    
    
    
    
    
    Node* cloneGraph(Node* node) 
    {
       unordered_map<Node*,Node*> frq;
      
        if(node==nullptr)
            return node;
        if(node->neighbors.size()==0)
        {
            Node* clone= new Node(node->val);
            return clone;
        }
        
        return dfs(node,frq);
    }
};
