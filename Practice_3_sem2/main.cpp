//
//  main.cpp
//  Practice_3_sem2
//
//  Created by Leonid Zemtsov on 26.02.2022.
//

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

 
using namespace std;


/* Первое задание */
class Lineage
{
public:
   Lineage(int day, int mon, int year);
};
 
Lineage::Lineage(int day, int mon, int year)
{
   time_t bd_time, cur_time;
   tm birthday = {0};
   
   birthday.tm_mday = day;
   birthday.tm_mon = mon - 1;
   birthday.tm_year = year - 1900;
   
   bd_time = mktime(&birthday);
   cur_time = time(NULL);
   
   cout << ctime(&bd_time) << endl;
   cout << ctime(&cur_time) << endl;
   cout << "Вы прожили: " << difftime(cur_time, bd_time)/3600/24 << " дней." << endl;
}

/* Второе задание */
void task2() {
    int number1;
    int number2;
    string operation;
    
    //Ввод первого числа
    cout << "Первое число: ";
    cin >> number1;
    cout << endl;
    
    //Ввод второго числа
    cout << "Второе число: ";
    cin >> number2;
    cout << endl;
    
    //Ввод желаемой операции
    cout << "Операция (+, -, /, *): ";
    cin >> operation;
    cout << endl;
    
    
    
    try
        {
            if (number2 == 0) {
                throw 0;
            } else {
                //switch не подходит(((
                if (operation == "+") {
                    cout << number1 + number2 << endl;
                } else if (operation == "-") {
                    cout << number1 - number2 << endl;
                } else if (operation == "*") {
                    cout << number1 * number2 << endl;
                } else if (operation == "/") {
                    cout << number1 / number2 << endl;
                }
            }
            
        }
        catch (int number2)
        {
            
            cerr << "don’t divide by zero" << '\n';
            
        }
        catch (const std::string &str)
        {
            std::cerr << "enter a number, not a symbol" << '\n';
        }
    
    
    
    
    
}
 
int main() {
    
    //Первое задание
    int d, m, y;
    
    cin >> d >> m >> y;
    
    Lineage(d, m, y); //Точность до одного дня XD
    
    //Второе задание
    task2();
    
}



