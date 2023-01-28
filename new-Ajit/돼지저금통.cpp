#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int e,f,n;
    
    cin>>e>>f>>n; //cin에 e와 f n을 입력받는다 -> 10 110 2
    
    f-=e; //f 변수에 e를 -한다 110-10 * f=100 (동전만의 무게)
    
    int sz=max(2,f+1); //a와 b중 큰 값 반환 함수 :: 2, f+1(101) 비교 :: sz=101
    int*d=new int[sz]; //int 형식의 포인터 변수
    
    fill(d,d+sz,0); //d부터 d+sz까지 범위 내 모든 수를 0으로 채우는 함수 포인터 d부터 d+sz까지르 0으로 초기화시키는것
    
    for(int i=0;i<n;i++){ //0부터 2까지 (개수마냥)
        int p,w; //pw 입력받기 (반복하며)
        cin>>p>>w; //입력받기
        if(d[w]==0||d[w]>p)d[w]=p; //d[50] ==0 이거나 d[50]dl 30보다 크면 d[50]은 30
        
        for(int j=w;j<=f;j++) { //50부터 f까지(무게)
            if(d[j-w]!=0){ //d[j-w] => 증감값 - 50이 0이아니면 -> 0으로 초기화했으니, 값이 있으면으로 해석 가능
                int calc = d[j-w]+p; //값 + 가치
                if(d[j]==0||d[j]>calc) //초기값이거나 결과보다 d[j]의 값이 크면
                    d[j]=calc; //calc 값을 넣는다
            }
        }
        
    }
    
    int l = d[max(f,0)]; //출력
    
    cout<<(l==0?-1:l)<<endl;
    
    return 0;
}