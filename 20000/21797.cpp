#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<fstream>
#include<stdio.h>
#include<time.h>
#include<cmath>
#include<random>
#include<chrono>
#include<algorithm>
using namespace std;

struct Random {
    mt19937 rd;
    Random() : rd((unsigned)chrono::steady_clock::now().time_since_epoch().count()) {}
    short GetInt(short l = 0, short r = 32767) {
        return uniform_int_distribution<short>(l, r)(rd);
    }
    double GetDouble(double l = 0, double r = 1) {
        return uniform_real_distribution<double>(l, r)(rd);
    }
} Rand;
int N,K,W;
pair<int,int> static_road_ind[1001];
pair<int,int> answer[1001];
pair<int,int> answerp[1001];
int visited[1001];
vector<int> arr[1001];
vector<int> arrp[1001];
int static_road[1001][1001];

void exit_func(void){
    ofstream fout;
    fout.open("1.txt");
    for(int i=0;i<K;i++){
        fout<<answer[i].first<<" "<<answer[i].second<<"\n";
    }
    fout.close();
}
long long chck_arrF(void){
    long long total = 0;
    for (int t = 1; t <= 1000; t++) {
        int start = t;
        fill(visited, visited + 1001, 0);
        queue<int> q;
        q.push(start);
        visited[start] = 1;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int i = 0; i < arr[cur].size(); ++i) {
                int nx=arr[cur][i];
                if (visited[nx]) continue;
                visited[nx] = visited[cur] + 1;
                total += visited[nx]-1;
                q.push(nx);
            }
        }
    }
    return total;
}
long long chck_arrpF(void){
    long long total = 0;
    for (int t = 1; t <= 1000; t++) {
        int start = t;
        fill(visited, visited + 1001, 0);
        queue<int> q;
        q.push(start);
        visited[start] = 1;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int i = 0; i < arrp[cur].size(); ++i) {
                int nx=arrp[cur][i];
                if (visited[nx]) continue;
                visited[nx] = visited[cur] + 1;
                total += visited[nx]-1;
                q.push(nx);
            }
        }
    }
    return total;
}
void make_knew(void){
    for(int i=0;i<K;i++){
        int x,y;
        x=rand()%N+1;
        y=rand()%N+1;
        if(static_road[x][y] or x==y){
            i--;
            continue;
        }
        arr[x].push_back(y);
        arr[y].push_back(x);
        answer[i]={x,y};
    }
}
void mutate(void){

    int count=1;
    for(int i=0;i<count;i++){

        int ind = rand() % K;
        int x = answerp[ind].first;
        int y = answerp[ind].second;
        arrp[x].erase(find(arrp[x].begin(),arrp[x].end(),y));
        arrp[y].erase(find(arrp[y].begin(),arrp[y].end(),x));

        int nx, ny;
        int tmp=rand()%2;
        if (tmp) {
            nx=x;
            do {
                ny=rand()%(N)+1;
            } while (nx == ny or find(arrp[nx].begin(),arrp[nx].end(),ny)!=arrp[nx].end());
        }
        else {
            ny=y;
            do {
                nx=rand()%(N)+1;
            } while (nx == ny or find(arrp[nx].begin(),arrp[nx].end(),ny)!=arrp[nx].end());
        }


        arrp[nx].push_back(ny);
        arrp[ny].push_back(nx);
        answerp[ind]={nx,ny};
    }
}
void paste(void){
    for(int i=0;i<=N;i++)arr[i]=arrp[i];
    for(int i=0;i<K;i++)answer[i]=answerp[i];
    //exit_func();
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>K>>W;
    for(int i=0;i<N-1;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
        arrp[x].push_back(y);
        arrp[y].push_back(x);
        static_road[x][y]=static_road[y][x]=1;
        static_road_ind[i]={x,y};
    }
    make_knew();


    long long score=1ull<<60;
    while(1){
        
        for(int i=0;i<=N;i++)arr[i].clear();
        for(int i=0;i<N-1;i++){
            int x,y;
            x=static_road_ind[i].first;
            y=static_road_ind[i].second;
            arr[x].push_back(y);
            arr[y].push_back(x);
        }
        // ifstream file("1.txt");
        // string line;
        // int i=0;
        // while (getline(file, line)) {
        //     int a = 0; string a_t = ""; int a_cur = 0;
        //     int b = 0; string b_t = ""; int b_cur = 0;
        //     while (1) {
        //         if (line[a_cur] == ' ') break;
        //         a_t += line[a_cur];
        //         a_cur++;
        //     }
        //     a = stoi(a_t);
        //     b_cur = a_cur + 1;
        //     while (1) {
        //         if (b_cur >= line.length()) break;
        //         b_t += line[b_cur];
        //         b_cur++;
        //     }
        //     b = stoi(b_t);
        //     answer[i].first = a;
        //     answer[i].second = b;
        //     i++;
        // }
        ifstream fin("1.txt");
        for(int i=0;i<K;i++) {
            int a,b;
            fin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);
            answer[i].first = a;
            answer[i].second = b;
        }

        long long eval0=chck_arrF();
        double T=1;




        while(T>0.0005){
            //
            for(int i=0;i<=N;i++)arrp[i]=arr[i];
            for(int i=0;i<K;i++)answerp[i]=answer[i];
            //
            mutate();

            long long eval1=chck_arrpF();
            if(eval0<score){
                score=eval0;
                exit_func();
            } 
            if(exp(-(eval1-eval0) / (T*30.0))>=Rand.GetDouble()){
                eval0=eval1;
                paste();
            }
            T*=0.9995;
            printf("T : %lf Score : %lld P: %.6lf\r", T,score,18.0 * (double)pow(20.0, (double)1 - ((double)score/2 / (double)W)));
        }

    }
    exit_func();
}  