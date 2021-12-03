// https://leetcode.com/problems/reverse-words-in-a-string-iii/
class Solution
{
public:
    string reverseWords(string s)
    {
        int length = s.length();
        int i = 0;
        while (i < length)
        {
            int start = i;
            while (i < length && s[i] != ' ')
            {
                i++;
            }

            // reverse the word in-place!
            int left = start, right = i - 1;
            while (left < right)
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }

            // continue to skip whitespace
            while (i < length && s[i] == ' ')
            {
                i++;
            }
        }
        return s;
    }
};