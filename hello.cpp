#include <iostream>

using namespace std;

int element;
int level;
int extra;
int backpack;
int s07;
int remain;

int (main){

int anemo [9]= {1,2,4,6,7,8,10,12,15};
cout <<"请输入神瞳种类"<< endl；
cout＜<“风神瞳［1］/n"；
cout<<"岩神瞳［2］/n"；
cout << "雷神瞳［3］/n"；
cout <<"草神瞳［4］/n"；
cout << "水神瞳［5］/n"；
cout<<"火神瞳［6］/n"；
cout << "月神瞳［7］/n"；
cin>>element;
cout<<"请输入神像等级"；
cin >>Level；
cout <<"请输入神瞳溢出数量"；
cin >> extra;

cout <<"请输入背包内神瞳数量"；
cin › backpack;

switch (element){
case 1:
for (int i=0;i<level;i++){
So7 += anemo[i];
remain = 66-So7-extra-backpack;
cout << remain;

}
}
}
