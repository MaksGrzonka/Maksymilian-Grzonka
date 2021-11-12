#include <iostream>
int main()
{
    int a, b, s;
    	std::cout << "Podaj liczbę a i b oraz s\n";
	    std::cin >> a >> b >> s;
        if (s==0)
        {
        std::cout << "s nie moze byc rowne 0\n";
        }    
        else
        {
	        if (a<b)	
            {
                if (s<0){
                    s=s*-1;
                }
	            for(;a<b;a+=s){
		        std::cout << a << "\n";	
	        }
        }
	    else {
	    std::cout << "b musi być większe od a\n";	
	    }
        }
	return 0;
} 