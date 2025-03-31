#include <algorithm> //Usada pra trabalAR COM    COLE��ES
//SEGUE  O PADR�O DE INICIO DA COLE��O, FINAL  E O QUE EU QUERO FAZER
//(inicio, final, fun��o)
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool menor50(int i){
    return i<50;
}

bool maior30(int i){
    return i >30;
}

bool positivo(int i){
    return i >=0;
}

void dobrar(int i){
    cout << i*2<<" ";
}

bool par(int i){
    return (i%2)==0;
}
int main(){
    vector<int> vt {3, 5, 2, 8, 40, -6};
    for(auto e:vt){
        cout << e << " ";
    }
    //all_of retornar verdadeiro se toda cole��o retornar verdadeiro
    //if(all_of(vt.begin(),vt.end(), [](int i){return i<50;} )){
    if(all_of(vt.begin(),vt.end(),menor50 )){
        cout << "\n\nTodos s�o menores que 50\n";
    }else{
        cout << "\n\nNem todos s�o menores que 50\n";
    }

    //any_of retorna verdadeiro se pelo menos um da cole��o retornat verdadeiro
    if(any_of(vt.begin(),vt.end(),maior30)){
        cout << "Pelo menos um � maior que 30\n\n";
    }else{
        cout << "Nenhum � maior que 30\n\n";
    }

    //none_of retorna falso se pelo menos um da cole��o retornar falso
    if(none_of(vt.begin(),vt.end(),positivo)){
        cout << "Todos s�o positivos\n\n";
    }else{
        cout << "Pelo menos um � negativo\n\n";
    }

    cout << "DOBRO \n";
    //for_each para aplicar uma fun��o a todos os elementos
    for_each(vt.begin(),vt.end(),dobrar);

    //find procurar um elmento
    auto it = find(vt.begin(),vt.end(),3);
    cout << "\nA busco achou "<<(*it<=vt.size());

    //Busca o valor por uma condi��o e o retorna se fpr verdadeiro(retorna o primeiro)
    it = find_if(vt.begin(),vt.end(),par);
    cout << "\nO primeiro par � "<<*it;

    //Primeiro se n�o
    it = find_if_not(vt.begin(),vt.end(),par);
    cout << "\nO primeiro impar � "<<*it;

    cout << "\n\nQuantidade de elementos 40 � "<< count(vt.begin(),vt.end(), 40) <<endl;

    cout << "\n\nQuantidade de pares � "<< count_if(vt.begin(),vt.end(),par) << endl;

    vector<int> vt2={11,12,13};
    vector<int>::iterator it1,it2;

    for(auto e:vt2){
        cout << e << " ";
    }

    it1=vt.begin();
    it2=vt.end()-1;
    cout << "\n\nPrimeiro " << *it1 << " e ultimo "<< *it2<<endl;

    advance(it1,2);
    //it1=it1+2;
    //it1++; it1++;
    cout << "\n\nO elemento � " << *it1 ;

    advance(it2,-2);
    cout << "\n\nO elemento � " << *it2 ;

    cout << "\n\nValores entre it1 e it2 s�o: " << distance(it1,it2)-1 << endl;

    cout << *it1<< " Antes " << *prev(it1) << " depois " << *next(it1)<< endl;

    copy(vt2.begin(),vt2.end(), insert(vt,vt.begin()) );

    cout << "\n\n O novo vector \n\n";
    for(auto e:vt){
        cout << e << " ";
    }
}
