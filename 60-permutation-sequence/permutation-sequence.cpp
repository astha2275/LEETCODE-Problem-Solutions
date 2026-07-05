class Solution {
private:
    vector<int> res;
    vector<int> vec;
    int factorial(int num_f){
        if(num_f==1 || num_f == 0){
            return 1;
        }
        return factorial(num_f-1) * num_f;
    }
    void calcNumber(int n, int k){
        if(n==1){
             res.push_back(vec[n-1]);
            return;
        }
        int f = factorial(n-1);
        int number_now = (k-1) / f;
        res.push_back(vec[number_now]);
        vec.erase(vec.begin() + number_now);
        k = k - f*((k-1)/f);
        calcNumber(n-1, k);
    }
public:
    string getPermutation(int n, int k) {
        vec = vector<int>(n);
        std::iota(vec.begin(), vec.end(), 1);
        calcNumber(n, k);
        string res_string = "";
        for(int d: res){
            res_string += std::to_string(d);
        }
        return res_string;
    }
};