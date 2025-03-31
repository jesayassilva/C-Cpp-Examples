//MAP

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    m["a"] = 123;
    m["b"] = 500;
    m.insert(pair<string, int>("d",1000));

    for (auto it = m.begin();it != m.end(); ++it){
        cout << it->first << " " << it->second << "\n";
    }

    cout << "-----------\n";
    map<string, int>::iterator it2;
    it2 = m.find("b");//Pegar um elemento pela chave
    cout << it2->first << " " << it2->second << "\n";

    if(m.count("i")!=0){//Pesquisar um elemento pela chave
        cout << "Existe";
    }else{
    cout << "Não existe";
    }


    cout << "\n-------------\n";
    m.erase(it2);//Apagar

    for (auto it = m.begin();it != m.end(); ++it){
        cout << it->first << " " << it->second << "\n";
    }



}
