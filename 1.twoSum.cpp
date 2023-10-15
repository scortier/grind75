// Optimal Solution
class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int, int> mp;
		vector<int> ans;
		int size = nums.size();

		for (int i = 0; i < size; i++)
		{
			// Check if the current number satisfies the two sum target
			if (mp.find(target - nums[i]) != mp.end())
			{
				// If it does, push back variables
				ans.push_back(mp[target - nums[i]]);
				ans.push_back(i);

				break;
			}
			// suppose targe = 14 , a[0]=2 hence target-a[0]=12 which is not in the array
			// so we push the {key,val} in {2,0}
			mp[nums[i]] = i; // Push key value pair to map
		}

		return ans;
	}
};