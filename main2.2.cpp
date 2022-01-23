#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> filter_palindromes(vector<string> vec)
{
    auto pal = vector<string>{};

    for(int i=0;i<vec.size();i++)
    {
        string word = vec[i]; 
        
        for (int j = 0; j<word.size()/2;j++)
        {
            if(word[j]!=word[word.size()-1-j])
            {
                break;
            }
           
            if(j==word.size()/2-1){
                pal.push_back(word + " ");
            }
        }
    } 
    
    return pal;     
}

int main()
{
    auto words = vector<string>{"kajak","lalka","jaj","zegar"};
    vector<string> end = filter_palindromes(words);
    for(int i=0; i<end.size();i++)
    {        
        cout<<end[i]<<"\n";
    }
    return 0;
}