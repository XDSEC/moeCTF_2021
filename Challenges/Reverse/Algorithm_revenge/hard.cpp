#include<bits/stdc++.h>
using namespace std;
int mapp[60][60];
void init(){
    cout<<"Welcome to moectf 2021!\nHearing that ez_Algorithm is toooooooo ez, here's it's revenge.\n";
    cout<<"Here's a maze.Try to get the maxium:\n";
}
void mkdata(){
    memset(mapp, 0, sizeof(mapp));
    int seed = 114514;
    srand(seed);
    for(int i=1;i<=50;i++)
        for(int j=1;j<=i;j++)
            mapp[i][j] = rand()%1919810;
}
void fail(string info){
    cout<<info;
    exit(-1);
}
int main(){
    init();
    mkdata();
    string a;
    cin>>a;
    if(a.size()!=49)
        fail("Input ERROR");
    else{
        int x, y;
        long long score=mapp[1][1];
        x=y=1;
        for(int i=0;i<a.size();i++){
            x += 1;
            if(a[i]!='L' && a[i]!='R' && a[i]!='D')
                fail("Input ERROR");
            else{
                switch (a[i]){
                    case 'L':
                        y-=1;
                        break;
                    case 'R':
                        y += 1;
                        break;
                    default:
                        break;
                }
                if (y<=0)
                    fail("Edge ERROR");
            }
            score += mapp[x][y];
        }
        cout<<"This's your score: "<<score;
        cout<<"\nThe input is the content of flag. Do remember add the moectf{}.";
    }
}
