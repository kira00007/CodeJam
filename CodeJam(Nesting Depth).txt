#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int t1 = t;
    while(t--)
    {
        string str, s, instr;
        cin >> instr;
        int n = instr.length();
        s=instr;

        for(int re=0;re<(s[0]-'0');re++)
            str+='(';
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]-'0'<s[i]-'0')
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+=')';
            }
            else
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+='(';
            }
        }
        str+=s[s.length()-1];
        for(int i=0;i<s[s.length()-1]-'0';i++)
            str+=')';
        cout << "Case #"<<(t1-t)<<": "<<str<<endl ;
    }
}
