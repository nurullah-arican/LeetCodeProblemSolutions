public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {
        int index = 0;
        bool indicesFound = false;
        int foundIndex = 0;

        while (!indicesFound)
        {
            int difference = target - nums[index];

            for (int i = index + 1; i < nums.Length; i++)
            {
                if (nums[i] == difference)
                {
                    foundIndex = i;
                    indicesFound = true;
                    break; // Break added to exit the inner loop once the indices are found
                }
            }

            if (!indicesFound)
            {
                index++;
            }
        }

        int[] result = new int[] { index, foundIndex };
        return result;
    }
}
