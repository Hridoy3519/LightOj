#include<iostream>
#include<map>
using namespace std;
#define ll long long int
int main()
{
    int t,ca=0;
    cin >> t;


    while(t--)
    {
        int n,i,x;
        ll sum=0;
        cin >> n;

        map<int,int>m;

        for(i=0; i<n; i++)
        {
            cin >> x;
            if(m[abs(x)]!=0)
            {
                if(m[abs(x)]==1)
                {
                    sum-=abs(x);
                    sum+=x;
                }
                else
                {
                    sum+=abs(x);
                    sum+=x;
                }
            }
            else
            {
                sum+=x;
            }
            if(x<=0)m[abs(x)]=2;
            else m[abs(x)]=1;
        }

        printf("Case %d: %lld\n",++ca,sum);

    }
    return 0;
}
