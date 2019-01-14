#include <iostream>
#include <vector>

using namespace std;

void bubble (std::vector<std::vector<int> > &v , int x)
{

    for (int i = 0; i < x; ++i)
    {
        for (int y = 0; y < x-1; ++y)
        {
            if(v[y][1]>v[y+1][1] || v[y][1]==v[y+1][1] && v[y][0]> v[y+1][0]) swap (v[y],v[y+1]);
        }
    }

}

void bubble2 (std::vector<std::vector<int> > &v , int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int y = 0; y < x-1; ++y)
        {
            if(v[y][1]<v[y+1][1] || v[y][1]==v[y+1][1] && v[y][2]>v[y+1][2] || v[y][1]==v[y+1][1] && v[y][2]==v[y+1][2] && v[y][0]>v[y+1][0]) swap(v[y],v[y+1]);
        }
    }




}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int contestants, problems, submissions;

        cin >> contestants >> problems >> submissions;

        std::vector<std::vector<std::vector<int> > > v(contestants);

        int min,player,prob,status;

        for (int i = 0; i < submissions; ++i)
        {    
            cin >> min >> player >> prob >> status;

            std::vector<int> temp;
            temp.push_back(min);
            temp.push_back(prob);
            temp.push_back(status);
            v[player-1].push_back(temp);
            
        }

        std::vector<std::vector<int> > msalah;

        for (int i = 0; i < contestants; ++i)
        {
            bubble(v[i] , v[i].size());
            int penailty=0,totprob=0,tempP=0 , tempPenality=0 , elraqamelmsa2oom=-1;
            if (v[i].size()!=0){
                tempP= v[i][0][1];
            }
            for (int x = 0; x < v[i].size(); ++x)
            {
                if(v[i][x][1]==elraqamelmsa2oom) continue;
                if(v[i][x][2]==0 && v[i][x][1]==tempP) {tempPenality+=20;}
                else if (v[i][x][2]==0 && v[i][x][1]!=tempP) {tempPenality=20; tempP=v[i][x][1];}
                else if(v[i][x][2]==1 && tempP != v[i][x][1]) {penailty+=v[i][x][0]; totprob++; elraqamelmsa2oom=v[i][x][1];}
                else if(v[i][x][2]==1 && tempP == v[i][x][1]) {penailty+=(v[i][x][0]+tempPenality); totprob++; elraqamelmsa2oom=v[i][x][1]; }

            }
            std::vector<int> temp;
            temp.push_back(i+1);
            temp.push_back(totprob);
            temp.push_back(penailty);
            msalah.push_back(temp);
        }


        bubble2 ( msalah , contestants);

        for (int i = 0; i < contestants; ++i)
        {
            cout << msalah[i][0] << " " << msalah[i][1] << " " <<msalah[i][2] <<endl;
        }

    }
}