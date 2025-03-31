#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::vector<int> meuVetor;  // cria um vetor de inteiros vazio

  if (meuVetor.empty())  // testa se o vetor est� vazio
    cout << "Vetor vazio!" << endl;
  else
    cout << "Vetor com elementos!" << endl;

  meuVetor.push_back(7); // inclue no fim do vetor um elemento
  meuVetor.push_back(11);
  meuVetor.push_back(2006);

  // vai imprimir tr�s elementos {7, 11, 2006}
  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Imprimindo o vetor...: " << meuVetor[i] << endl;

  cout << endl;
  meuVetor.pop_back();  // retira o �ltimo elemento

  // agora, s� vai imprimir dois {7, 11}
  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Meu vetor, de novo...: " << meuVetor[i] << endl;

  system("PAUSE");
  return 0;
}
