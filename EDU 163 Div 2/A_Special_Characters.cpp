#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll   long long
#define pii pair<ll ,ll >
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null _type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll  mod = 1e9+7;
aoid solae()
{
    ll  n;
    cin>>n;
   // string s;
   // char ch = 'A';
    if(n %2 == 1)
    {
        cout<<"NO\n";
    }
    else
    {
        n/=2;
        cout<<"YES\n";
        while(n--)
        {
            cout<<"AAB";
        }
        cout<<"\n";
       // cout<<s<<"\n";
    }
}
 
ll  main()
{
    fastread();
    ll  t;
    cin>>t;
    while(t--)
    {
       solae();
    }
     
    return 0;
}