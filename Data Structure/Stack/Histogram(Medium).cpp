#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
//cout << fixed << setprecision(8) << a << endl;
#define Fast_Input ios_base :: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define pb push_back
#define ff first
#define se second
#define mem(a, b)     memset(a, b, sizeof(a))
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
/*sort(v.begin(), v.end(),
     [](const pair<int, int>& x, const pair<int, int>& y)
{
    if (x.first != y.first)
        return x.first < y.first;
    return x.second < y.second;
});
*/
// All possible moves of a knight
int const X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int const Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int const fx[]= { -1, 1, 0, 0, -1, -1, 1, 1};
int const fy[]= { 0, 0, 1, -1, 1, -1, 1, -1};
const int inf = numeric_limits<int>::max();
const ll mx=1000;
const ll mod=1e9+7;
int main()
{
    Fast_Input

    int t,ca=0;
    cin >> t;
    while(t--)
    {
        int n,i,j;
        cin >> n;
        vector<int>v(n);
        for(i=0; i<n; i++)cin >> v[i];
        int counright[n+1],counleft[n+1];

        for(i=0; i<n; i++)
        {
            j=i-1;
            while(j>=0)
            {
                if(v[j]>=v[i])
                {
                    j=counleft[j];
                }
                else break;
            }
            counleft[i]=j;
        }

        for(i=n-1; i>=0; i--)
        {
            j=i+1;
            while(j<n)
            {
                if(v[j]>=v[i])
                {
                    j=counright[j];
                }
                else break;
            }
            counright[i]=j;
        }
        ll maxi=-1,x;
        for(i=0;i<n;i++)
        {
            x=(i-counleft[i])+(counright[i]-i)-1;
            maxi=max(maxi,(v[i]*x));
        }

        printf("Case %d: %lld\n",++ca,maxi);
    }

    return 0;
}



