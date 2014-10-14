#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdexcept>
using namespace std;

ifstream &open_file(ifstream &infile, const string &filename){
    infile.close();
    infile.clear();
    infile.open(filename.c_str());
    return infile;
}


struct Query{
    vector<string> words_;

    //string s
    //const string s
    void readFile(const string &name){
        ifstream infile;
        if(!open_file(infile, name)){
            throw std::runtime_error("open file failed!");
        }
        words_.clear();
        string word;
        while(infile >> word){
            words_.push_back(word);
        }
        infile.close();
        infile.clear();
    }

    void debug(){
         for(vector<string>::iterator it =words_.begin(); it !=words_.end(); ++it){
             cout << *it << endl;    
         }
    }
    
    vector<string> queryWord(const string &word){
        vector<string> result;
        for(vector<string>::iterator it = words_.begin(); it != words_.end(); ++it){
            /*
             * 在该单词(*it)中搜寻是否存在字符或者子串
             */
            string::size_type pos = it->find(word);
            if(pos != string::npos){
                result.push_back(*it);
            }

        }   
        return result;
    }

};



int main(int argc, const char *argv[])
{
    string filename = "in.txt";
    Query Q;
    Q.readFile(filename);
//    Q.debug();
    
    string word;
    while(cin >> word){
        vector<string> res = Q.queryWord(word);
        cout << "size = " << res.size() << endl;
        for(vector<string>::iterator it = res.begin(); it != res.end(); ++it){
            cout << *it << endl;    
        }
    }

    return 0;
}


