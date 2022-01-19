#include <iostream>
using namespace std;
bool is_divisible(int x,int y)
{
    if(x%y==0)
        return true;
    return false;

}
bool is_even(int x)
{
    if(is_divisible(x,2))
        return true;
    return false;
    
}
int main(){
    int x;
    cout<<"podaj liczbe do sprawdzenia : ";
    cin>>x;
    if(is_even(x)) 
    cout<<"parzysta\n";
    else 
    cout<<"nieparzysta\n";
    return 0;
}