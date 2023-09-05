#include <iostream>
#include <cstdlib>
using namespace std;

#include <list>
#include <set>
#include <iterator>
#include <algorithm> //чтоб делать сортировку списка через sort.


int main()
{
cout << "Введите 5 чисел вашего списка:";
cout << "\n";

list <int> listik; //создаём список (контейнер) по имени Листик.
int i2;
for (int i1=0; i1<5; i1++){
	cin >> i2;
	listik.push_back(i2);
//listik.insert(it1, i1);
}


//copy(listik.begin(), listik.end(), ostream_iterator<int>(cout," ")); //выводим элементы списка Листик с первого по последний.
//cout << "\n"; //переход на новую строку (как Enter).

listik.sort(); //сортировка элементов списка Листик в порядке возрастания (для других сортировок, напр., по чётным/нечётным или по убыванию, надо в скобках указать компаратор).


cout << "Отсортированные в порядке возрастания числа списка: ";
copy(listik.begin(), listik.end(), ostream_iterator<int>(cout," ")); //выводим отсортированные элементы списка Листик в порядке возрастания.
cout << "\n";

set<int> mySet; //объявляем пустое множество.

for ( int i=0; i<5; i++) {
	list <int>::iterator it = listik.begin();
	std::advance(it, i);
	int a = *it;
//	cout << a;
//	cout << "\n";
	
	mySet.insert(a);
}  //тут мы присваиваем множеству mySet отсортированные ранее элементы из списка Listik (хотя множество и так бы их автоматически рассортировало в порядке возрастания).

//copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
//cout << "\n"; //выводим множество mySet на экран.


//функция поиска по значению в множестве mySet.
cout << "Введите значение, которое надо найти в множестве: ";
int m;
cin >> m;
if (mySet.find(m) == mySet.end()) {
    cout << "Такого значения не существует.";
    cout << "\n";
}
else {
	cout << "Такое значение присутствует.";
	cout << "\n";
}


//вставка значения в множество mySet с сохранением сортировки контейнера (она заложена в функциях самого множества).
cout << "Введите значение, которое хотите добавить в множество: ";
int n;
cin >> n;
mySet.insert(n);
copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
cout << "\n";

return 0;
}
