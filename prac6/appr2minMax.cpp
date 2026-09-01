//run by :  cd /home/samc4e/daa/prac6 && g++ -o appr2minMax appr2minMax.cpp && ./appr2minMax


#include<iostream>
#include<vector>
#include<climits>
using namespace std;


vector<int> findMinMax(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX, maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) { 
        if (arr[i] < mini) mini = arr[i];
        if (arr[i] > maxi) maxi = arr[i];
    }
    
    return {mini, maxi};
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}