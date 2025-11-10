#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <numeric>

using namespace std;


float sum(vector<float> &arr){
    return accumulate(arr.begin(), arr.end(), 0.0);
}


float mean(vector<float> &arr){
    int n = arr.size();
    
    float total = sum(arr);

    return total / n;
}


float power(float &n){
    return n + n;
}




int main(){
    
    vector<float> x = {8.3252, 8.3014, 7.2574, 5.6431, 3.8462};
    vector<float> y = {4.526 ,3.585, 3.521 ,3.413 ,3.422};


    cout << (x.size() == y.size() ? "True": "False") << "\n";
    
    return 0;
}