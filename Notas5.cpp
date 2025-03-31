#include <stdio.h>
#include<iostream>
using namespace std;
#include <string>

class Aluno{
	private:
		string nome;
		string matricula;
		float n1;
		float n2;
		float trabalho;	
	public:
		void notas(float p1, float p2, float t){
			n1 = p1;
			n2 = p2;
			trabalho = t;
		}
		float media(){
			return (n1*2.5 + n2*2.5 + trabalho * 2 ) / 7;
			
		}
		
		int final(){
			if(media() >= 7){
				return 0;
			}else{
				return (7-media())+7;
			}
			
		}
		
};

main(){
	Aluno a;
	float n1,n2,n3;
	cin >> n1>>n2>>n3;
	a.notas(n1,n2,n3);
	cout << "A media é " <<a.media()<< endl;
	cout << "pontos necessarios para aprovação: " << a.final() << endl;
}
