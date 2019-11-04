#include <iostream> 
#include <vector>
#include <map>
#include <stdio.h>
#include <sstream>
using namespace std;

int main(){
    map<string,string> diccionario;
    string key,val, str;
    stringstream ss;
    while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> val;
        ss >> key;
        diccionario[key] = val;
    }
    string palabra;
    while (cin>>palabra ){
        auto it =diccionario.find(palabra);
        if (it!=diccionario.end()){
            cout<<it->second<<endl;
        }else{
            cout<<"eh"<<endl;
        }
    }
}
