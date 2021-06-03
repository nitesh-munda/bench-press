#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(int i = a; i <= b ; i++)
#define SQ(a) (a) * (a)
#define LB lower_bound
#define UP upper_bound
#define EQR equal_range

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

const int MOD = 1000000007;

int main() {

    //Taking input and output is sometimes bottleneck hence this can make them efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);

    /**
     * 
     * Code for taking input from file and printing output to file
     **/
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    /**
     * Taking string line as input
     */ 
    // getline(cin, s);

    /**
     * Take input while stream is not null
     */
    //  while (cin >> x) {
    // 
    // }


    int n, x, data;
    cin >> n >>  x;
    vi v;
    FOR(i,0,n-1) {
        cin >> data;
        v.PB(data);
    }

    int i = 0, k = 0;
    for (int i = n/2 ; i >= 1; i /= 2) {
        while (i+k < n && v[i+k] <= x)  k += i;
    }

    if (v[k] == x) {
        cout << "found at " << k << endl;
    } else {
        cout << "did not find the element at" << k  << endl;
    }


}