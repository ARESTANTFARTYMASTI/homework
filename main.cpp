#include <iostream>
#include <vector>

using namespace std;

void cout_vecctor(vector<string>& name, vector<int>& ball) {

    cout << "name    ball:" << endl;
    for (int i = 0; i < name.size(); i++) {

        cout << name[i] << "     " << ball[i] << endl;//функция вывода содержимого векторов
    }
}

void sr_ar_vec(vector<int>&ball, int summ){
    
    for(int i=0;i<ball.size();i++){
                 summ+=ball[i];
                
            }
            cout<<"среднее арифметическое = "<<summ/ball.size()<<endl;//функция нахождения среднего арифметического баллов учеников
}

        
    
    

    int main(){

        setlocale(LC_ALL, "rus");
        int sum =0;
        int &summ=sum;
        
        int bals=0;//быллы ученика
        int&bali=bals;
        int kl=0;
        int& kol=kl;//ссылка на количество учеников
        int fun = 0;// анализ вводимый пользователем
        string nam  ;  // имя ученика
        string&nm=nam;
        vector<string> name;//вектор имен учеников
        vector<int>ball;//вектор баллов учеников
        

        cout << "ввыберете 1 из 3х вариантов инициализации" << endl;
        cout << "1:демонстрационный анализ" << endl;
        cout << "2:анализ на случайных значениях" << endl;
        cout << "3:анализ на входных значениях пользователем" << endl;
        cout << "выберете какой анализ требуется(1,2 или 3)" << endl;
        cin >> fun;
        if (fun == 1) {

        }
        if (fun == 2) {

        }
        if (fun == 3) {
            cout<<"введите количество человек :";
            cin>>kl;

            for (int i = 0; i < kol; i += 1) {
                cout<<"введите имя номер "<< i+1<<":";
                cin >> nam;
                name.push_back(nm);

            }
            
            
            for (int i = 0; i < kol; i++) {
                cout<<"введите балы человека под номером :"<< i+1<<":";
                cin >> bals;
                ball.push_back(bali);
            }

            cout_vecctor(name, ball);
            
            sr_ar_vec(ball, summ);
            




        }
        else {
            cout << "вы ввели не те значения" << endl;

        }

        return 0;
    }


