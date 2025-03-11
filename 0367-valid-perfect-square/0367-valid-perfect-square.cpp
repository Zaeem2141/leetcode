class Solution {
public:
    bool isPerfectSquare(int num) {
        long copy = num;
        while(copy*copy>=num){
            copy=0.5 * (copy + num/copy);
            if(copy*copy==num){
                return true;
            }
        }
        return false;
    }
};