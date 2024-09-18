#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={ 1,2,3,4,2,9 };
    sort(v.begin(), v.end());
    cout<<"mini " << *v.begin()<<endl;
    cout<<"maxi " << *(v.end()-1)<<endl;
    return 0;
}