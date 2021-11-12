#include <iostream>

int main()
{
    int a, b, c;
    	std::cout << "Podaj liczbę a, b oraz c\n";
	std::cin >> a >> b >> c;
        
	if (a<b)
		if (c!=0)	
		for(;a<=b;a++){
			if (a%c==0)
			std::cout << a << "\n";	
		}
		else {
   		std::cout << "c musi być różne od 0\n";
		}
	else {
	std::cout << "b musi być większe od a\n";	
	}
	return 0;
} 