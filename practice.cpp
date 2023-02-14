#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int arr[] = {1, 5, 10, 50, 100, 500, 1000};
    char arrs[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int n = sizeof(arrs)/sizeof(arrs);
    int ans = 0;
    string s = "III";
    int len = s.length();
    
    for (int i=0;i<len;i++){
        int inds = find(arrs,arrs+6,s[i])-arrs;
        int inds1 = find(arrs,arrs+6,s[i+1])-arrs;
        if(inds<inds1){
            ans += arr[inds1]-arr[inds];
            i++;
        }
        else{
            ans += arr[inds];
        }
    }
    cout<<"Answer is = "<<ans;
    return 0;
}


