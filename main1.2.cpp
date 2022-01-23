#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

float average_of(vector<double> vec)
{
    float suma=0;    
    for
    (int i=0; i<vec.size(); i++){
        suma+=vec[i];
    }
    float average = suma/vec.size();
    return average;
}



int main()
{
    auto numbers = vector<double>{1,2,2.5,8,5,4,9};
    cout<<average_of(numbers)<<"\n";
    return 0;
}