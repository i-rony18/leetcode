class Solution {
public:

bool vowels(char ch )
{
    switch (ch)
    {
        case  'A':
        case  'a':
        case  'E':
        case  'e':
        case  'I':
        case  'i':
        case  'O':
        case  'o':
        case  'U':
        case  'u':
        return true;
    }
    return false;
}
    string sortVowels(string s) {
        vector<char>vowel;
        for(char ch : s)
        {
            if(vowels(ch))
            {
                vowel.push_back(ch);
            }
        }
        sort(vowel.begin(),vowel.end());
        for(int i = 0 , j = 0 ; i<s.size();i++)
        {
            if(vowels(s[i]))
            {
                s[i] = vowel[j];
                j++;
            }
        }
        return s ;
    }
};