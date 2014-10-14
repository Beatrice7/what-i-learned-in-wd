#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

void trans_string(string &word){
    for(string::iterator it = word.begin(); it != word.end(); ++it){
        if(isupper(*it)){
            *it = tolower(*it);
        }else if(islower(*it)){
            *it = toupper(*it);
        }
    }
}


int main(int argc, const char *argv[])
{
    string s;
    while(cin >> s){
        trans_string(s);    
        cout << s << endl;
    }
    return 0;
}
