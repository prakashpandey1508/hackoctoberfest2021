#include<bits/stdc++.h>
using namespace std;
int main(){
   string su = "Tutorials point";
   transform(su.begin(), su.end(), su.begin(), ::toupper);
   cout << su << endl;
   string sl = "Tutorials Point";
   transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
   cout << sl << endl;
   return 0;
}
