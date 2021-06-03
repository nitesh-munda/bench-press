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

    vi input;
    int n, x;
    cin >> n >> x;
    int d;
    FOR(i,0,n-1) {
        cin >> d;
        input.PB(d);
    }
    sort(input.begin(), input.end());
    bool found = false;
    int s = 0, e = n-1;
    while (s <= e) {
        int mid = (s+e)/2;
        if (input[mid] == x) {
            found = true;
            cout << "found at :" << mid;
            break;
        } else if (input[mid] > x) {
            e = mid-1;
        } else {
            s = mid+1;
        }
    }

    if (!found) {
        cout << "Did not find " << x << endl;
    }

}