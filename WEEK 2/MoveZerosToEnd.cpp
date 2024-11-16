#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int count =0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[count]);
                count++;
            }
        }
    }
};

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    Solution sol;
    sol.pushZerosToEnd(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}