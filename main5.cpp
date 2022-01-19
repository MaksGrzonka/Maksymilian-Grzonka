#include <iostream>
using namespace std;
bool is_even(int x){
    if(x%2==0)
        return true;
    return false;
}
int main(){
    int x;
    cout << "podaj liczbe: ";
   cin>>x;
    if(is_even(x))
    cout <<"parzysta\n";
    else 
    cout <<"nieparzysta\n";
    return 0;
}