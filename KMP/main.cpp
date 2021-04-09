#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    cout << "Enter image:"<<endl;string image;getline(cin, image);
    string str;cout <<"Enter string:"<<endl;getline(cin,str);           //image-образ, строка которую нам надо найти;
    vector <int> prefix (image.size(), 0);int j;int f;                    //prefix-префикс функция от образа
    for (int i=1; i < image.size(); i++){                                       //str-строка в которой надо найти образ
        if(image[prefix[i - 1]] == image[i]){ prefix[i]= prefix[i - 1] + 1;}
        else if(prefix[i-1]!=0){j=prefix[i - 1];f= i - 1;
            do {j=prefix[j - 1];f=j;
            if(image[f] == image[i]){ prefix[i]= j + 1;}
            }while ((j!=0)&&(prefix[i] == 0));
            if(j==0){ prefix[i]=0;}
        }
    }int otvet=0;
    for (int i=0,j=0;(i<str.size())&&(j<(image.size()));i++,j++){
        if(str[i]!=image[j]){
            if(j!=0){j=prefix[j-1]-1;i--;}else{j--;}
        }else if(j==image.size()-1){otvet=i-j;}
    }
    cout <<otvet<<endl;for (int i=0;i<str.size();i++){cout<<prefix[i]<<'|';}

    /*
    for (int i=1;i<image.size();i++){
        for (int j=prefix[i-1]+1;(j>0)&&(prefix[i]==0);j--){
            if((j==prefix[i-1]+1 )&&(image[j-1]==image[i])){prefix[i]=j;}else if(image[prefix[j-1]]==image[i]){prefix[i]=prefix[j-1];}
        }
    }*/
}
