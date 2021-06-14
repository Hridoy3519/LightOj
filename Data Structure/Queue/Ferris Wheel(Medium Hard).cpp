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
        int n,m,i,j,sum=5,x;
        cin >> n >> m;
        int arr[n+1][m+1],on[m+1],coun[n+1];
        mem(on,0);
        mem(coun,0);
        mem(arr,0);
        deque<int>d;
        queue<int>q;
        for(i=2;i<=n;i++)d.push_back(i);
        on[1]=1;
        coun[1]=1;
        arr[1][1]=1;
        i=2;
        q.push(1);
        int c=0;
        while(!d.empty() || !q.empty())
        {
            x=on[i];
            on[i]=0;
            if(x==0)
            {

            }
            else if(coun[x]==m)
            {
                q.pop();
            }
            else
            {
                q.pop();
                d.push_back(x);
            }
            vector<int>v;
            while(!d.empty())
            {
                x=d.front();
                d.pop_front();
                if(arr[x][i]==0)
                {
                    on[i]=x;
                    arr[x][i]=1;
                    coun[x]++;
                    q.push(x);
                    break;
                }
                else
                    v.push_back(x);
            }

            for(j=v.size()-1;j>=0;j--)d.push_front(v[j]);
            sum+=5;
            if(i==m)i=1;
            else i++;
        }

        printf("Case %d: %d\n",++ca,sum);
    }
    return 0;
}



