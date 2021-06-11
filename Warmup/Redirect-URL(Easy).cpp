#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,ca=0;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[4]!='s')s.insert(4,"s");
        printf("Case %d: ",++ca);
        cout << s << endl;
    }
}
