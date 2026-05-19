class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<unordered_set<char>>row(9);
       vector<unordered_set<char>>col(9);
       vector<unordered_set<char>>boxes(9);
       for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char ch=board[i][j];
            if(ch=='.'){
                continue;
            }
            if(row[i].count(ch)){
                return false;
            }
            row[i].insert(ch);
            if(col[j].count(ch)){
                return false;
            }
            col[j].insert(ch);
            int boxnum=(i/3)*3+(j/3);
            if(boxes[boxnum].count(ch)){
                return false;
            }
            boxes[boxnum].insert(ch);
        }
       }
       return true;
    }
};
