#include <iostream>

int main()
{
    int x,b;
    std::cout << "Podaj x\n";
    std::cin >> x;
    if(x==2||x==3||x==5||x==7)
        switch(x){
            case 2:
                std::cout << "Suma liczb pierwszych mniejszych lub równych podanej liczbie wynosi 2\n";
                break;
            case 3:
                std::cout << "Suma liczb pierwszych mniejszych lub równych podanej liczbie wynosi 5\n";
                break;
            case 5:
                std::cout << "Suma liczb pierwszych mniejszych lub równych podanej liczbie wynosi 10\n";
                break;
            case 7:
                std::cout << "Suma liczb pierwszych mniejszych lub równych podanej liczbie wynosi 17\n";
                break;
            default:
                std::cout << "Error";
        }
    else {
        if(x%2==0||x%3==0||x%5==0||x%7==0)
            std::cout << x << " nie jest liczbą pierwszą\n";
        else {

            for (int a=0; x>10; x--) {
                if(x%2==0||x%3==0||x%5==0||x%7==0)
                    x=x;
                    else{
                    a=a+x;
                    b=a;
                    }
            }

            b=b+17;
            std::cout << "Suma liczb pierwszych mniejszych lub równych podanej liczbie wynosi " << b << "\n";
        }
    }

    return 0;
}