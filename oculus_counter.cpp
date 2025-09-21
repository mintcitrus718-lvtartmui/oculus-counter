#include <iostream>

using namespace std;

int element;	//
int level;
int extra;
int backpack;
int So7; 
int remain;

int main(){

  int anemo[10]= {0,1,2,4,6,7,8,10,12,15};
  int geo[10] = {0,2,4,8,12,14,16,20,24,30};
  int electro[10] ={0,10,12,15,18,20,22,25,28,30};
  int dendro[10] = {0,20,22,25,28,30,32,35,38,40};
  int hydro[10] = {0,20,22,25,28,30,32,35,38,40};
  int pyro[10] = {0,20,22,25,28,30,32,35,38,40};
  int newmoon[6] = {0,20,22,25,28,30};            //挪德地图不完整，仅支持5级，游戏版更后更新
  cout <<"请输入神瞳种类"<< endl;
  cout <<"风神瞳［1］\n";
  cout <<"岩神瞳［2］\n";
  cout << "雷神瞳［3］\n";
  cout <<"草神瞳［4］\n";
  cout << "水神瞳［5］\n";
  cout <<"火神瞳［6］\n";
  cout << "月神瞳［7］\n";
  cin>>element;
  cout<<"请输入神像等级\n";
  cin >> level;
  cout <<"请输入神瞳溢出数量\n";
  cin >> extra;
  
  cout <<"请输入背包内神瞳数量\n";
  cin >> backpack;
  
  
  switch (element){
    	case 1:
	    	for (int i=0;i<level;i++){
	        	So7 += anemo[i];
			}
			remain = 66-So7-extra-backpack;
	    	cout << remain;
			break;
	    	
		case 2:
			for(int i=0;i<level;i++){
			  So7 += geo[i];
			
			}
			remain = 131-So7-extra-backpack;
			cout << remain << endl;
			break;
		case 3:
			for(int i=0;i<level;i++){
			  So7 += electro[i];
			  
			}
	    	remain = 181-So7-extra-backpack;
			cout << remain << endl;
		  break;
		case 4:
	        for(int i=0;i<level;i++){
	          So7 += dendro[i];
	        }
			remain = 271-So7-extra-backpack;
	        cout << remain << endl;
	        break;
    	case 5:
	        for(int i=0;i<level;i++){
		      So7 += hydro[i];   
	        }	
	      	remain = 271-So7-extra-backpack;
		    cout << remain << endl;;
    	break;
		case 6:
	        for(int i=0;i<level;i++){
	        	So7 += pyro[i];  
	        }
			remain = 271-So7-extra-backpack;
	        cout << remain << endl;;
    	break;
		case 7:
	        for(int i=0;i<level;i++){
	          So7 += newmoon[i];
	        } 
			remain = 125-So7-extra-backpack;    //临时
	        cout << remain << endl;
	        break;
    }	
}
