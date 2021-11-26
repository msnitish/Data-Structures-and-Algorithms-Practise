
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define MAX_CHAR 26
int main()
{ 
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
   int t; cin >> t;
while(t--){
        int a, b;
        cin >> a >> b;
        int sum  = (a+b)/4;
        int mini = min(a, b);
        cout << min(mini, sum) << endl;

}


}
