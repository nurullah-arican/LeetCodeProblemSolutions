public class Solution
{
    private readonly Dictionary<string, int> _specialRomanDictionary = new Dictionary<string, int>()
    {
        {"IV", 4},
        {"IX", 9},
        {"XL", 40},
        {"XC", 90},
        {"CD", 400},
        {"CM", 900}
    };

    private readonly Dictionary<string, int> _standardRomanDictionary = new Dictionary<string, int>
    {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000}
    };

    public int RomanToInt(string s)
    {
        int totalValue = 0;

        // Iterate over special Roman numerals like IV, IX, etc.
        foreach (string specialRoman in _specialRomanDictionary.Keys)
        {
            if (string.IsNullOrEmpty(s))
            {
                break;
            }

            if (s.Contains(specialRoman))
            {
                string previousRoman = s;
                s = s.Replace(specialRoman, "");
                int lengthDifference = previousRoman.Length - s.Length;
                totalValue += (lengthDifference / 2) * _specialRomanDictionary[specialRoman];
            }
        }

        // Iterate over standard Roman numerals like I, V, X, etc.
        foreach (string standardRoman in _standardRomanDictionary.Keys)
        {
            if (string.IsNullOrEmpty(s))
            {
                break;
            }

            if (s.Contains(standardRoman))
            {
                string previousRoman = s;
                s = s.Replace(standardRoman, "");
                int lengthDifference = previousRoman.Length - s.Length;
                totalValue += lengthDifference * _standardRomanDictionary[standardRoman];
            }
        }

        return totalValue;
    }
}