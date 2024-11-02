## Intuition
The goal is to convert a Roman numeral into an integer. Roman numerals use both individual symbols and special pairs for subtraction cases (like "IV" for 4). We need to handle these special cases first, then process the remaining symbols normally.

## Approach
### Dictionaries
We use two dictionaries:
1. One for special numeral pairs (e.g., "IV", "IX").
2. One for standard numerals (e.g., "I", "V", "X").

### Iteration
1. First, we check for special numeral pairs in the string, remove them, and add their values to the total.
2. Then, we check for standard numerals and add their values to the total.

### Final Value
After processing the entire string, the accumulated `totalValue` gives us the integer conversion.

## Complexity
- **Time complexity:** O(n), where *n* is the length of the Roman numeral string. This is because we scan the string multiple times, but the operations are limited by the string's length.
- **Space complexity:** O(1), constant space, since we only use a few variables and dictionaries, which don’t scale with input size.
