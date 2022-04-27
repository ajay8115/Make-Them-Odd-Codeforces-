#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

bool is(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            return true;
        }
    }

    return false;
}

void div(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] / 2;
    }
}

void aj()
{
    int n;
    cin >> n;

    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            s.insert(a[i]);
        }
    }

    int cnt = 0;
    while (!s.empty())
    {
        int m = *s.rbegin();
        s.erase(m);
        if (m % 2 == 0)
        {
            cnt++;
            s.insert(m / 2);
        }
    }

    cout << cnt << kk;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        aj();
    }
    return 0;
}
