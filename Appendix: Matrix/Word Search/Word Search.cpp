class Solution {
public:
    
    
    bool dfs (vector<vector<char>>& board,int i,int j, string word,int ind) 
    {
        if(ind+1==word.size())
            return true;
        board[i][j]-=65;
        
        if(i>0 && word[ind+1]==board[i-1][j] && dfs(board, i-1, j, word, ind+1) )
            return true;
        if(i<board.size()-1 && word[ind+1]==board[i+1][j] && 
           dfs(board, i+1, j, word, ind+1) )
            return true;
        if(j>0 && word[ind+1]==board[i][j-1] && dfs(board, i, j-1, word, ind+1) )
            return true;
        if(j<board[0].size()-1 && word[ind+1]==board[i][j+1] && 
           dfs(board, i, j+1, word, ind+1) )
            return true;
        
        board[i][j]+=65;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
       for(int i=0;i<board.size();i++)
           for(int j=0;j<board[0].size();j++)
               if(board[i][j] == word[0] && dfs(board, i, j, word, 0)) 
                   return true;
                   
        return false;
    }
};
