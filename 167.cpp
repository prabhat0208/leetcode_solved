class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i = 0, j = numbers.size() - 1; i < numbers.size();){
            if(numbers[i] + numbers[j] < target)
                i++;
            else if(numbers[i] + numbers[j] > target)
                j--;
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        } 
        return ans;
    }
};