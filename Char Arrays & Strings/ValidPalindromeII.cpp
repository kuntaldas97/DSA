#include <iostream>

using namespace std;

// Leet code - https://leetcode.com/problems/valid-palindrome-ii/

bool checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else
        {
            bool ans1 = checkPalindrome(s, start + 1, end);
            bool ans2 = checkPalindrome(s, start, end - 1);

             return ans1 || ans2;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter the input sring : ";
    cin >> s;
    cout << endl;

    bool ans = validPalindrome(s);
    if (ans == true)
    {
        cout << "Input String is a valid palindrome after zero or one removal." << endl<<endl;
    }
    else
    {
        cout << "Input String is not a valid palindrome." << endl<<endl;
    }
    return 0;
}