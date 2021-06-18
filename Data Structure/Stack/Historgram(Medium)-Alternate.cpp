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
        int rb[n+1];
        stack<int>s;
        s.push(n-1);
        rb[n-1]=n;

        for(i=n-2; i>=0; i--)
        {
            while(s.size()>0 && v[s.top()]>=v[i])
                s.pop();

            if(s.size()==0)rb[i]=n;
            else rb[i]=s.top();
            s.push(i);
        }
        while(s.size()>0)s.pop();

        int lb[n+1];
        s.push(0);
        lb[0]=-1;

        for(i=1; i<n; i++)
        {
            while(s.size()>0 && v[s.top()]>=v[i])
                s.pop();
            if(s.size()==0)lb[i]=-1;
            else lb[i]=s.top();
            s.push(i);
        }

        ll x,maxi=-1;
        for(i=0;i<n;i++)
        {
            cout << rb[i] << " " << lb[i] << endl;
            x=rb[i]-lb[i]-1;
            x=x*v[i];
            maxi=max(maxi,x);
        }

        printf("Case %d: %lld\n",++ca,maxi);

    }

    return 0;
}




