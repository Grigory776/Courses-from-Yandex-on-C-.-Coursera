#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;
//Когда параметр в функцию передается по ссылке или указателю, функция не копирует элементы, а работает с теми которые получила, в
//следствии, функция работает гораздо быстрее

void PrintVector(const vector<bool>& a) {

    for (const auto& x : a)
        cout << x << endl;
}

void PrintMap(const map<int, string> m) { // фор пробегает по элементам контейнера(словаря) независимо от индексов
    for (const auto& item : m)                    // first - выводим имя ключа,  second - имя элемента
                                            // ключи хранятся отсортировано, для чисел по возрастанию, для буквенных ,  в алфавитном
        cout << item.first << ": " << item.second << endl;
}

int main()
{
    vector<bool> es(15, true); // первый аргумент 15 - размер вектора, второй true - заполнение вектора по умолчанию
    es[14] = false;

    //PrintVector(es);

    es.assign(18, false); // метод асайн расширяет вектор, и при необходимости кладет новые значения по умолчанию

    es.clear(); // чистит наш вектор полностью


   // PrintVector(es);

    /*словари "map"*/

    map <int, string> events; // идея словаря заключается в том, что мы сами решаем какие индексы"ключи" будут у наших элементов

    events[2001] = "Grisha rodilsia!"; // событие с ключом 2001
    events[2020] = "Shas'";
    events[2023] = "potom";

    PrintMap(events);
    cout << endl;
    events.erase(2023); // удаление элемента по ключу
    PrintMap(events);
    cout << endl;

    // словарь почему то сам создает пары ключ - значение ПРимер:
    map <int, string> exp{ {2,"two"},{2,"add"} };
    
    
    exp.erase(2);
    PrintMap(exp);

    return 0;
}

