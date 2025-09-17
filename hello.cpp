#include <iostream>

using namespace std;

int element;
int level;
int extra;
int backpack;
int so7;
int remain;

int main(){

  int anemo[9]= {1,2,4,6,7,8,10,12,15};
  int geo[9] = {2,4,8,12,14,16,20,24,30};
  int electro[9] ={10,12,15,18,20,22,25,28,30};
  int dendro[9] = {20,22,25,28,30,32,35,38,40};
  int hydro[9] = {20,22,25,28,30,32,35,38,40};
  int pyro[9] = {20,22,25,28,30,32,35,38,40};
  int newmoon[5] = {20,22,25,28,30};            //挪德地图不完整，仅支持5级，游戏版更后更新
  
  cout <<"请输入神瞳种类"<< endl；
  cout＜<"风神瞳［1］/n"；
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
        case 2:
          So7 += 
      }
    }
}
