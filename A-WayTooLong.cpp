#include <bits/stdc++.h>
#include <string>
using namespace std;

string solution(string s)
{
    string ans = "";
    if (s.length() <= 10)
    {
        ans = s;
    }
    else
    {
        ans = "";
        ans.append(s, 0, 1);
        string length = to_string(s.length() - 2);
        ans.append(length);
        ans.append(s, s.length() - 1, 1);
    }
    return ans;
}

int main()
{
    int number;
    cin >> number;
    cin.sync();
    for (int i = 0; i < number; i++)
    {
        string words;
        getline(cin, words);
        cout << solution(words) << endl;
    }
    return 0;
}