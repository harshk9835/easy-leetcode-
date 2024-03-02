class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char ch : s) {
            switch (ch) {
            case '(':
                paren.push(ch);
                break;
            case '[':
                paren.push(ch);
                break;
            case '{':
                paren.push(ch);
                break;
            case ')':
                if (paren.empty() || paren.top() != '(')
                    return false;
                paren.pop();
                break;
            case ']':
                if (paren.empty() || paren.top() != '[')
                    return false;
                paren.pop();
                break;
            case '}':
                if (paren.empty() || paren.top() != '{')
                    return false;
                paren.pop();
                break;
            }
        }
        if (paren.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
