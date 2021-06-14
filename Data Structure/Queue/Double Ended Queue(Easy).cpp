#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ca=0;
    cin >> t;
    while(t--)
    {
        int n,m,coun=0;
        cin >> n >> m;
        string s;
        int x;
        deque<int>d;
        printf("Case %d:\n",++ca);
        while(m--)
        {
            cin >> s;
            if(s[1]=='u')
            {
                cin >> x;
                if(coun<n)
                {
                    if(s[4]=='L')
                    {
                        coun++;
                        printf("Pushed in left: %d\n",x);
                        d.push_back(x);
                    }
                    else
                    {
                        coun++;
                        printf("Pushed in right: %d\n",x);
                        d.push_front(x);
                    }
                }

                else
                {
                    printf("The queue is full\n");
                }
            }
            else
            {
                if(coun>0)
                {
                    if(s[3]=='R')
                    {
                        coun--;
                        cout << "Popped from right: " << d.front() << endl;
                        d.pop_front();
                    }
                    else
                    {
                        coun--;
                        cout << "Popped from left: " << d.back() << endl;
                        d.pop_back();
                    }
                }
                else
                {
                    printf("The queue is empty\n");
                }

            }
        }

    }
    return 0;
}
