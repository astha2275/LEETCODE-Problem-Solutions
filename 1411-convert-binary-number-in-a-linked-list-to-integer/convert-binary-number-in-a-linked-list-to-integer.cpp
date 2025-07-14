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
    int getDecimalValue(ListNode* head) {
        if(head->next == NULL)
        return head->val;

        int res=0;
       
        int count=0;
        vector<int> value;
        ListNode* ptr=head;

        while(ptr!=NULL){
            value.push_back(ptr->val);
            
            ptr = ptr->next;
        }
        int n= value.size();
        for(int i = n-1; i>=0; i--){
            int num = value[i];
            res += num * (pow(2, count));
            count++;
        }

        return res;
    }
};