class Solution
{
public:
    int longestPalindrome(std::string s)
    {
        unordered_map<char, int> charCount;

        for (char c : s)
        {
            charCount[c]++;
        }

        int length = 0;
        bool oddFound = false;

        for (const auto &entry : charCount)
        {
            // Count even occurrences
            length += entry.second / 2 * 2;
            if (entry.second % 2 == 1)
            {
                // Mark if an odd occurrence is found
                oddFound = true;
            }
        }

        // If an odd occurrence was found,
        // add 1 to the length
        if (oddFound)
        {
            length++;
        }

        return length;
    }
};