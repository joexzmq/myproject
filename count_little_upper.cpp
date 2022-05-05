#include <iostream> 
#include <cctype>

using namespace std;

int main()
{ 
    int o = 0, isLowerCount = 0, isUpperCount = 0; 
    char t[100]; 
    cin >> t; 
    for(char c : t) 
    { 
        if(islower(c)) isLowerCount++;
        else if(isupper(c)) isUpperCount++; 
        else o++;
    }
    cout << isLowerCount << endl << isUpperCount << endl << o << endl; 
    
    return 0; 
}

