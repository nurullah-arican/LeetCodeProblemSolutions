public class Solution
{
    public string LongestCommonPrefix(string[] strs)
    {
        // If the array has only one string, return it as the longest common prefix
        int arrayLength = strs.Length;
        if (arrayLength == 1)
        {
            return strs[0];
        }

        // Find the index of the shortest string in the array
        int shortestIndex = 0;
        for (int i = 0; i < arrayLength; i++)
        {
            if (string.IsNullOrEmpty(strs[i]))
            {
                // If any string is null or empty, return an empty prefix
                return "";
            }

            // Update the index of the shortest string
            if (strs[shortestIndex].Length > strs[i].Length)
            {
                shortestIndex = i;
            }
        }

        // Initialize the shortest string as the reference prefix
        string shortestString = strs[shortestIndex];
        string prefix = shortestString;

        // Iterate through each string in the array
        foreach (string currentString in strs)
        {
            // Skip the comparison if it is the shortest string itself
            if (currentString == shortestString)
            {
                continue;
            }

            // Compare characters up to the length of the shortest string
            for (int j = 0; j < shortestString.Length; j++)
            {
                // Check if the prefix matches the start of the current string
                if (currentString.Substring(0, prefix.Length) == prefix)
                {
                    // Move to the next string if there's a match
                    break;
                }
                else if (j == shortestString.Length - 1 &&
                         currentString.Substring(0, prefix.Length) != prefix)
                {
                    // If no common prefix is found, return an empty string
                    return "";
                }
                else
                {
                    // Remove the last character from the prefix
                    prefix = prefix.Remove(prefix.Length - 1);
                }
            }
        }

        // Return the longest common prefix
        return prefix;
    }
}