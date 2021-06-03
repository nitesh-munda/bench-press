#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(int i = a; i <= b ; i++)
#define SQ(a) (a) * (a)

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

    int n, data;
    cin >> n;
    vi input;
    FOR(i,0,n-1){
        cin >> data;
        input.PB(data);
    }
    int sum=0, best=0;
    FOR(i,0,n-1) {
        sum = max(input[i], sum + input[i]);
        best = max(best, sum);
    }
    cout << best << "\n";
    
    


}