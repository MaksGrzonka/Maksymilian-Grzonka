#include <iostream>

int main()
{
    int x;
    std::cout << "Podaj x\n";
	std::cin >> x;
	    if(x==2||x==3||x==5||x==7)
	    std::cout << x << " jest liczbą pierwszą\n";
	    else{
    	if(x%2==0||x%3==0||x%5==0||x%7==0)
	    std::cout << x << " nie jest liczbą pierwszą\n";
	    else{
	    std::cout << x << " jest liczbą pierwszą\n";
	}}
	return 0;
} 