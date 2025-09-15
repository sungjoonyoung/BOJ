// #include<iostream>
// #include<stdio.h>
// using namespace std;

// int main()
// {
// 	int N=100'000;
//     double tmp=0;
//     long long ttmp=0;
//     for(int i=0;i<N/2;i++){
//         tmp+=2'000'000'001/100;
//         ttmp+=2'000'000'001;
//     }
//     for(int i=0;i<N/2-1;i++){
//         tmp-=2'000'000'000/100;
//         ttmp-=2'000'000'000;
//     }
//     ttmp-=2'000'050'000;
//     printf("%lf\n",tmp);
//     printf("%ld",ttmp);
// }


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int N=100'000;
    cout<<N<<"\n";
    for(int i=0;i<N/2;i++){
        cout<<2'000'000'001<<"\n";
    }
    for(int i=0;i<N/2-1;i++){
        cout<<-2'000'000'000<<"\n";
    }
    cout<<-2'000'050'000<<"\n";
}
