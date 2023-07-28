#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
   
    int count=0;
    int final_count=0;
    string result="";
    for(int left=0;left<s.length();)
    {
        int right=left+1;
        while(s[right]!=' ' && right<s.length())
        {
            right++;
        }
        int frequency[26]={0};
        count=0;
        for(int index=left; index<right; index++)
        {
            frequency[s[index]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(frequency[i]>1)
            {
                count++;
            }
        }
        if(count>final_count)
        {
            final_count=count;
            result="";
            for(int j=left;j<right;j++)
            {
                result+=s[j];
            }
        }
        left=right+1;
    }
    if(result.empty())
    {
        cout<< "-1";
    }
    else{
        cout<< result;
    }




    
    return 0;
}