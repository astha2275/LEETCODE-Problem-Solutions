class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int temp = 0;
        for(int i =0; i<operations.size(); i++){
            if(operations[i]=="X++" || operations[i]=="++X"){
                temp+=1;
            }
            else
            temp-=1;
        }
        return temp;
        
    }
};