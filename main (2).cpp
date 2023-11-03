#include <iostream>
#include <vector>

using namespace std;

void cout_vecctor(vector<string>& name, vector<int>& ball) {

    cout << "name    ball:" << endl;
    for (int i = 0; i < name.size(); i++) {

        cout << name[i] << "        " << ball[i] << endl;//функция вывода содержимого векторов
    }
}

void print_vec(vector<int>&ball,vector<string>&name){
    for(auto &element:name){
        cout<<element<<"  ";
    }
    cout<<""<<endl;
    for(auto &elem:ball){
        cout<<elem<<"   ";                     //функция вывода содержимого вектора
    }
}

void sr_ar_vec(vector<int>&ball, int summ){
    
    for(int i=0;i<ball.size();i++){
                 summ+=ball[i];
                
            }
            cout<<"среднее арифметическое = "<<summ/ball.size()<<endl;//функция нахождения среднего арифметического баллов учеников
}
void mediana(int sr1, int sr2,vector<int>&ball){
    if(ball.size()%2==0){
        sr1=ball[(ball.size()/2)-1];
        sr2=ball[ball.size()/2];
        cout<< "медиана= " <<(sr1+sr2)/2.0f<<endl;
        
    }
    else{
        sr1=(ball.size()+1)/2;
        cout<< "медиана= " <<ball[sr1-1]<<endl;
    }
}

        
    
    

    int main(){

        setlocale(LC_ALL, "rus");
        int sum =0;
        int &summ=sum;
        int sr_1=0;// значение середины вектора баллов
        int &sr1=sr_1;
        int sr_2=0;//значение 2го серединного элемента вектора баллов бпри условии что вектор по размеру четный
        int &sr2=sr_2;
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
            vector<string>name{"Вася","Дима","Леонид","Калыван","Саня","Гера","Ильяс","Семен","Бади","Фер"};
            vector<int>ball{1,2,3,4,5,6,7,8,9,10};
            cout_vecctor(name, ball);
            
            sr_ar_vec(ball, summ);
            mediana(sr1,sr2,ball);
            cout<<"Сдесь вы видите имя каждого человека и соответствующая ему оценка,тфкже вы выдите среднее арифметическое оценок и их медиану"<<endl;
            

        }
        
        if (fun == 2) {
            cout<<" к сожалению эту часть программы я не смог реализовать :()"<<endl;

        }
        
        
        if (fun == 3) {
            cout<<"введите количество человек :";
            cin>>kl;

            for (int i = 0; i < kol; i += 1) {
                cout<<"введите имя человека номер "<< i+1<<":";
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
            mediana(sr1,sr2,ball);
            
            




        }
        if(fun!=1 and fun!=2 and fun!=3){
            
            cout<<"вы ввели не те значения"<<endl;
        }
            

        return 0;
    }



