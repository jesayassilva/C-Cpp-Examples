#include <algorithm> //Usada pra trabalAR COM    COLE��ES
//SEGUE  O PADR�O DE INICIO DA COLE��O, FINAL  E O QUE EU QUERO FAZER
#include <iostream>
#include <vector>
using namespace std;

bool menor50(int i){
return i <50;
}

bool maior30(int i){
return i >30;
}

bool negativo(int i){
return i >=0;
}

void dobro(int i){
cout << i*2<< " ";
}
bool par(int i){
    return (i%2)==0;
}

int main()
{
    vector<int> vt {3, -4, 2, 8, 40, -6};
    for(auto  x : vt){
        cout << x << " ";
    }
    cout << endl;

    //all_of retorna true se toda cole��o retornar verdadeira
    //if(all_of(vt.begin(), vt.end(),[](int i){return i<50;})){//tamb�m podemos usar lambda
    if(all_of(vt.begin(), vt.end(),menor50)){//tamb�m podemos usar lambda
        cout << "Todos s�o menores que 50\n";
    }else{
        cout << "Pelo menos um � maior que 50\n";
    }

    //any_of retorna true se pelo menos um da cole��o retornar verdadeira
    if(any_of(vt.begin(), vt.end(),maior30)){//tamb�m podemos usar lambda
        cout << "Pelo menos um � maior que 30\n";
    }else{
        cout << "N�o existe numeros maiores que 30 \n";
    }



    //none_of retorna false se pelo menos um da cole��o retornar false
    if(none_of(vt.begin(), vt.end(),negativo)){//tamb�m podemos usar lambda
        cout << "Todos s�o positivos\n";
    }else{
        cout << "Pelo menos um � negativo\n";
    }


    //for_each plica uma fun��o a todos os elementos da cole��o
    for_each(vt.begin(), vt.end(),dobro);

    //Procura um elemnto e retorna um iterador com o resultado.
    auto it = find(vt.begin(),vt.end(),40);
    cout <<"\nElemento � "<< *it <<endl;

    //Retorna o primeiro elemento par
    it = find_if(vt.begin(),vt.end(),par);
    cout <<"\nElemento � "<<*it<<endl;

    //Retorna o primeiro elemento impar (que n�o atender a condi��o)
    it = find_if_not(vt.begin(),vt.end(),par);
    cout <<"\nElemento � "<<*it<<endl;

    //count contar elementos
    cout <<"Quantidade  de elemtos 40 �: " << count(vt.begin(),vt.end(), 40) << endl;

    cout <<"Quantidade  de pares �: " << count_if(vt.begin(),vt.end(), par) << endl;
    
    
    vector<int>::iterator  it1,it2,it3;
    it1 =  vt.begin();
    it2= vt.end()-1;
    cout << "PRIMEIRO E ULTIMO" << it1 << it2;
    
    advance(it1,2);//Faz o iterador avan��r
    
    distance(it1,it2) ;
    
    

}

