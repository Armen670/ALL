#include <iostream>
#include <windows.h>
#include <iomanip>

struct node{
    unsigned int key;int value;
    node *next,*prev;
};typedef node *pnode;pnode zero;pnode head;
pnode createnode(int key,int a){
    pnode newnode =new node;
    newnode->value=a;newnode->key=key;newnode->next=NULL;newnode->prev=NULL;
    return newnode;
}
void addfirst(pnode newnode){
    if (head){
        newnode->next=head;
        newnode->prev=head->prev;
        head->prev->next=newnode;
        head->prev=newnode;
        head=newnode;
    }else {
        head=newnode;
        newnode->next=head;
        newnode->prev=head;
    }
}
void addlast(pnode newnode){
    if (head){
        newnode->next=head;
        newnode->prev=head->prev;
        head->prev->next=newnode;
        head->prev=newnode;
    }else {
        head=newnode;
        newnode->next=head;
        newnode->prev=head;}
}
void addafter(pnode p,pnode newnode){
        newnode->next =p->next;
        newnode->prev=p;
        p->next->prev=newnode;
        p->next=newnode;
}
void addbefore(pnode p,pnode newnode){
    addafter(p->prev,newnode);
}


void keyaddbefore(unsigned int key,unsigned int newkey,int newvalue){
    pnode a=head;
    if (head){
        do {
            if ((a->key)==key){addbefore(a,createnode(newkey,newvalue));if(a==head){
                head=a->prev;
            }
                break;
            }a=a->next;
        }while (a!=head);
    }
}

void deletenode(pnode dnode){
    bool a=0;if(head->next==head){a=1;}
    if (head){
        dnode->prev->next=dnode->next;
        dnode->next->prev=dnode->prev;
        if (dnode==head){
            head=dnode->next;
        }
        delete dnode;
    }
    if (a){head=zero;
    }
}
void deletelist(){

    while(head){
        deletenode(head);
    }
}
void emptylist(){
    if (head){deletelist();}
    head=zero;}
void deletelast(){
    deletenode(head->prev);
}
void deletefirst(){
    deletenode(head);
}

int lengthlist() {
    pnode a = head;
    int b = 0;
    if (head) {
        do {
            b++;
            a = a->next;
        } while (a != head);
    }
    return b;
}

void listout(){
    using namespace std;pnode ass=head;
    for (int i=0;i<54;i++){cout<<"_";}cout<<endl;
    cout <<"|"<<setw(14)<<left<<"№п/п";//10
    cout <<"|"<<setw(24)<<left<<"Ключ";//20
    cout <<"|"<<setw(25)<<left<<"Число"<<"|"<<endl;//20
    pnode a=head;unsigned int b=1;
    if (head) {
        do {for (int i=0;i<54;i++){cout<<"_";}cout<<endl;
            cout <<"|"<<setw(10)<<left<<b;
            cout <<"|"<<setw(20)<<left<<a->key;
            cout <<"|"<<setw(20)<<left<<a->value<<"|"<<endl;
            b++;
            a = a->next;
        } while (a != head);
    }
    for (int i=0;i<54;i++){cout<<"_";}cout<<endl;
    cout << "Всего в списке "<<b-1<<" элементов"<<endl;
}
void mainmenu(){
    using namespace std;unsigned int a;unsigned int c;char b;unsigned int d;
    char h[]= "ВЫ УВЕРЕНЫ?(Y(если да)/N(если нет))";
    char g[]="Если хотите выйти в главное меню, введите F.";
    cout << "1. Создание пустого списка.\n"
            "2. Подсчет количества элементов списка.\n"
            "3. Вывод на экран содержимого списка.\n"
            "4. Вставка элемента.\n"
            "5. Исключение элемента.\n"
            "6. Уничтожение списка с освобождением памяти.\n";
    cin >> a;
    switch (a){
        case 1:
            cout<<h;cin>>b;
            if (b=='Y'){emptylist();}
            cout << g;cin>>b;
            if (b=='F'){mainmenu();}
            break;
        case 2:
            cout <<"В списке "<<lengthlist()<<" элементов\n";
            cout << g;cin>>b;
            if (b=='F'){mainmenu();}
            break;
        case 3:
            listout();cout << g;cin>>b;
            if (b=='F'){mainmenu();}
            break;
        case 4:
            cout << "1.Вставить элемент в начало списка.";cout<<endl;
            cout << "2.Вставить элемент в конец списка.";cout<<endl;
            cout << "3.Вставить элемент перед элементом с заданным ключом.";cout<<endl;
            cout <<"4.Выйти в главное меню.";cout<<endl;
            cin>>c;
            switch (c) {
                case 1:cout<<h;cin>>b;
                    if (b=='Y'){
                        cout<<"Введите ключ:";cin>>c;cout<<endl;
                        cout <<"Введите значение:";cin >>a;cout<<endl;
                        addfirst(createnode(c,a));
                    }
                    break;
                case 2:cout<<h;cin>>b;
                    if (b=='Y'){
                        cout<<"Введите ключ:";cin>>c;cout<<endl;
                        cout <<"Введите значение:";cin >>a;cout<<endl;
                        addlast(createnode(c,a));
                    }
                    break;
                case 3:
                    cout<<h;cin>>b;
                    if (b=='Y'){
                        cout<<"Введите заданный ключ:";cin>>d;cout<<endl;
                        cout<<"Введите ключ нового элемента:";cin>>c;cout<<endl;
                        cout <<"Введите значение нового элемента:";cin >>a;cout<<endl;
                        keyaddbefore(d,c,a);
                    }
                    break;
                case 4:mainmenu();
                    break;
            }
            cout<<g;cin >>b;if (b=='F'){mainmenu();}
            break;
        case 5:
            cout << "1.Исключить первый элемент.";cout<<endl;
            cout << "2.Исключить последний элемент.";cout<<endl;
            cout<< "3.Выйти в главное меню.";cout<<endl;
            cin >>c;
                switch (c) {
                    case 1:
                        cout<<h;cin>>b;
                        if (b=='Y'){deletefirst();}cout <<g;cin>>b;
                        if (b=='F'){mainmenu();}
                        break;
                    case 2:
                        cout<<h;cin>>b;
                        if (b=='Y'){deletelast();}cout <<g;cin>>b;
                        if (b=='F'){mainmenu();}
                        break;
                    case 3:mainmenu();
                        break;
                }
            cout << g;cin>>c;
            if (b=='F'){mainmenu();}
            break;
        case 6:
            cout<<h;cin>>b;
            if (b=='Y'){deletelist();}
            cout <<g;cin>>b;
            if (b=='F'){mainmenu();}
            break;
    }
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    cout << "Программу создал А.К.Бабурян.\n";
    mainmenu();
}
