#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while ( T-- )
    {
        set <long long> s;
        long long N, M, cand;
        cin >> N;
        cin >> M;
        vector <long long> v(M, 0);
        for ( long long i = 0 ; i < N ; i++ )
        {
            cin >> cand;
            s.insert(cand);
        }
        for ( long long i = 0 ; i < M ; i++ )
        {
            cin >> v[i];
            if ( s.count(v[i]) )
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
                s.insert ( v[i] );
            }
        }
    }
    return 0;
}
