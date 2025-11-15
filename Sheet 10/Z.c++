#include <bits/stdc++.h>
using namespace std;

bool isRight(int x1,int y1,int x2,int y2,int x3,int y3){
    // تحقق أن المثلث غير منعدم (مساحة != 0)
    int area2 = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(area2==0) return false;

    long long l1=(x1-x2)*(long long)(x1-x2)+(y1-y2)*(long long)(y1-y2);
    long long l2=(x1-x3)*(long long)(x1-x3)+(y1-y3)*(long long)(y1-y3);
    long long l3=(x2-x3)*(long long)(x2-x3)+(y2-y3)*(long long)(y2-y3);

    vector<long long> v={l1,l2,l3};
    sort(v.begin(),v.end());
    return v[0]+v[1]==v[2];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(isRight(x1,y1,x2,y2,x3,y3)){
        cout<<"RIGHT\n";
        return 0;
    }

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};

    for(int i=0;i<4;i++){
        if(isRight(x1+dx[i],y1+dy[i],x2,y2,x3,y3)){cout<<"ALMOST\n";return 0;}
        if(isRight(x1,y1,x2+dx[i],y2+dy[i],x3,y3)){cout<<"ALMOST\n";return 0;}
        if(isRight(x1,y1,x2,y2,x3+dx[i],y3+dy[i])){cout<<"ALMOST\n";return 0;}
    }

    cout<<"NEITHER\n";
    return 0;
}