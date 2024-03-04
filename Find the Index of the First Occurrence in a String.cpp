class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        if (n == 0)
            return 0;
        int index;
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                index = i + 1;
                int j = 1;
                while (j < needle.length()) {
                    if (index > haystack.length())
                        return -1;
                    if (haystack[index] == needle[j]) {
                        j++;
                        index++;
                    } else {
                        break;
                    }
                }
                if (j == needle.length()) {
                    return i;
                }
            }
        }
        return -1;
    }
};
