#include <iostream>
#include <cstdlib>
using namespace std;

#include <list>
#include <set>
#include <iterator>
#include <algorithm> //чтоб делать сортировку списка через sort.

#include <fstream>
#include <string>
#include <conio.h>
#include <sstream>
#include <cstring>
#include <stdlib.h>



int main()
{

const int len = 5000;
int strings = 1000;//кол-во слов (их не 1000, но на всякий случай).
//const char ch = '\n';
const char ch = ' ';
char w[200];
int word = 20;
string wo[word][strings]; //сюда записываются слова из всех строчек.
int m1=1;
int k=0;
int j=0;
int r;

int s;

char mass[len][strings];
ifstream fs("/storage/emulated/0/Download/104_Демкина_Е.И._29.05 (3).txt", ios::in | ios::binary); //открытие файла.
if(!fs) return 1; //проверка того, открылся ли файл.


  for(r = 0; r<strings; r++)
	{
		
		fs.getline(mass[r], len-1,ch); //считываем слова в массив.
		
//		cout << "String " << r+1 << " = "<< mass[r] << endl; //выводим строку из массива
				
			std::istringstream iss(mass[r]);
  		std::string word1;
   
	}
									

ofstream fout("новыйфайл1.txt"); // итоговый файл с результатом


string s1[1000];
string s3="0";
for (s=0; s<strings; s++){
	s1[s]= string(mass[s]);
}	
	

for (k=0; k<strings; k++){
	for (j=k+1; j<strings-1; j++){
	
		if(s1[j]==s1[k]){
			m1=m1+1;
			
			s1[j]="0";
		}
		
	}
	if (s1[k]!=s3){
		fout << s1[k] << " = " << m1 << endl;
	}
	m1=1;
}

fout.close();      
fs.close();


return 0;


}
