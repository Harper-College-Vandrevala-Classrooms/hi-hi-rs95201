#include <iostream>
#include <cctype>
using namespace std;

short strcmp_case_insensitive(const string s1, const string s2)
{
    size_t shorter_length;
    if(s1.length() < s2.length())
    {
        shorter_length = s1.length();
    }
    else
    {
        shorter_length = s2.length();
    }
    size_t i = 0;
    short value = 0;
    while(i < shorter_length && tolower(s1[i]) == tolower(s2[i]))
    {
        ++i;
    }
    if(i == shorter_length)
    {
         if(s1.length() == s2.length())  
         {
             value = 0;
         }
         else if(s1.length() < s2.length())
         {
             value = 1;
         }
         else
         {
             value = -1;
         }
    }
    else
    {
         if(tolower(s1[i]) < tolower(s2[i]))
        {
            value = -1;
        }
        else
        {
            value = 1;
        }
    }
    return value;
}

