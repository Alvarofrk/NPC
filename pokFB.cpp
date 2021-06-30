#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void camb(int a,int b){
	int c=a;
	a=b;
	b=c;
}
int pokemon(int map[][5]){
	 
	int p1=1, ef=2, ed=3, sal=4, muro=5;
	while(false){
	
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(map[i][j]==p1){
					if(map[i+1][j]==0)
						camb(map[i][j],map[i+1][j]);
					if(map[i][j+1]==0)
						camb(map[i][j],map[p1][j+1]);
					if(map[i][j-1==0])
						camb(map[i][j],map[p1][j-1]);
					if(map[i+1][j]==ef)
						camb(map[i][j],map[i+1][j]);
					if(map[i][j+1]==ef)
						camb(map[i][j],map[p1][j+1]);
					if(map[i][j-1==ef])
						camb(map[i][j],map[p1][j-1]);
					if((map[i+1][j]==sal) ||(map[i][j+1]==sal)||(map[i+1][j-1]==sal))
						return true;
				}
			}
		}
	}
}


int main(){
	int mapa[5][5]={{5,5,5,4,5},
					{5,0,0,0,5},
					{1,0,5,2,4},
					{5,0,0,0,5},
					{5,5,5,5,5}};
	pokemon(mapa);
	
	
	return 0;
}
