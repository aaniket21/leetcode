/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m,vector<int>(n,-1));\
        vector<pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        int start=0;

        int row=0,col=0;
        ListNode* current=head;

        while(current!=nullptr){
            matrix[row][col]=current->val;
            current=current->next;

            int next_row=row+dir[start].first;
            int next_col=col+dir[start].second;

            if(next_row<0 || next_row>=m || next_col<0 || next_col>=n || matrix[next_row][next_col]!=-1){
                start=(start+1)%4;
                next_row=row+dir[start].first;
                next_col=col+dir[start].second;
            }

            row=next_row;
            col=next_col;
        }

        return matrix;
    }
};