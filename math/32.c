int longestValidParentheses(char* s) {
    int left = 0, right = 0, maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(')
            left++;
        else
            right++;

        if (left == right)
            maxLen = (left + right > maxLen) ? left + right : maxLen;
        else if (right > left)
            left = right = 0;
        
    }
        left = right = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] == '(')
            left++;
        else
            right++;

        if (left == right)
            maxLen = (left + right > maxLen) ? left + right : maxLen;
        else if (left > right)
            left = right = 0;
    }

    return maxLen;

}
