char* reverseString(char* s) {
    int left = 0, right = 0;


    while (s[right] != '\0')
        right++;
    right--;  


    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    return s;  
}
