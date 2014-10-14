#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> words;
    string word;
    while(cin >> word){
        words.push_back(word);
    }

    for(vector<string>::iterator it = words.begin(); it != words.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
