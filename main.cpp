#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cctype>

using namespace std;





class Value{
    
private:
    int data;
public:
    Value(int data){
        this->data = data;
    };
    
    int getData() const{
        return data;
    }

    Value operator+(Value &other) const {
        return Value(this->data + other.data);
    }

};





int main(){

    Value a = {1};
    Value b = {2};

    Value c = a + b;
    
    cout << c.getData() <<"\n";
    

    return 0;
}