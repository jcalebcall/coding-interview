/*
* One Away: There are three types of edits that can be performed on strings: insert a character,
* remove a character, or replace a character. Given two strings, write a function to check if they are
* one edit (or zero edits) away.
* EXAMPLE
* pale, ple -> true
* pales, pale -> true
* pale, bale -> true
* pale, bake -> false 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool are_equal(char* s1, char* s2, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (*(s1 + i) != *(s2 + i))
        {
            return false;
        }
    }
    return true;
}

bool one_away(char* s1, char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (abs(len1 - len2) > 1)
    {
        return false;
    }
    
    for (int i = 0; i < len1; i++)
    {
        if (s1[i] == s2[i])
        {
            continue;
        }
        
        // insertion
        if (len1 < len2)
        {
            return are_equal(s1 + i, s2 + (i+1), len1 - i);
        }
        
        // removal
        if (len1 > len2)
        {
            return are_equal(s1 + (i+1), s2 + i, len1 - (i+1));
        }
        
        // replace
        return are_equal(s1 + (i+1), s2 + (i+1), len1 - (i+1)); 
        
    }
    
    return true;
}

int main()
{
    char s1[] = "lunn";
    char s2[] = "luaa";
    bool result = one_away(s1, s2);
    printf(result ? "true" : "false");
    return result;
}
