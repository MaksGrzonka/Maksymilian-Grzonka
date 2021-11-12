#include <iostream>

int main()
{
    int a, b;
    	std::cout << "Podaj liczbę a i b\n";
	std::cin >> a >> b;
        
	if (a<b)	
	for(;a<=b;a++){
		std::cout << a << "\n";	
	}
	else {
	std::cout << "b musi być większe od a\n";	
	}

	return 0;
} 