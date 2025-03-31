//SET
//Elementos ordenados e unicos
// iterar entro os elementos

#include <set>
#include <iostream>
using namespace std;
int main(){
    set <int> s;
    //set<int, greater<int> > s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(2);

    //s.erase(2);

    if( s.find(9) != s.end()){
        cout << "Encontrou: " << endl;
    }else{
        cout << "Não existe: " << endl;
    }



    for(auto it=s.begin(); it != s.end(); ++it){
        cout << *it << endl;
    }




}
