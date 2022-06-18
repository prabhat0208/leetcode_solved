class Solution
{
public:
  int thirdMax(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int numSize = nums.size();
    if (numSize - 3 < 0)
      return nums[numSize - 1];
    return nums[numSize - 3];
  }
};