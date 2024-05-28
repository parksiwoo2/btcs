#include <iostream>
#include <iomanip>
#include <vector>
#include<cstdlib>
#include<ctime>
#include<chrono>
using namespace std;

int main()
{
    vector<int> vec={4,6,8,12,16,20,32};
    int point=0;
    srand(time(NULL));
    while(1)
    {
        for(int i=0;i<vec.size();i++)
        {
            int a=vec[i];
            if(a<8)
            {
                for(int k=0;k<25;k++)
                {
                    string pro="";
                    string ans;
                    for(int j=0;j<a;j++)
                    {
                        char num=rand()%10+48;
                        pro+=num;
                    }
                    while(1)
                    {
                        chrono::seconds l(3);
                        auto start=chrono::steady_clock::now();
                        cout<<pro<<'\n';
                        cin>>ans;
                        if(pro==ans)
                        {   
                            auto end=chrono::steady_clock::now();
                            auto durat=chrono::duration_cast<std::chrono::seconds>(end-start);
                            point+=a;
                            cout<<setw(20)<<point<<'\n';
                            if(durat.count()>5)
                                return 0;
                            break;
                        }
                        else
                           point-=a*3;
                    }
                }
            }
            else
            {
                for(int k=0;k<25;k++)
                {
                        int ran=rand()%4;
                        string pro="";
                        string ans;
                        if(ran)
                        {
                            for(int j=0;j<a;j++)
                            {
                                char num=rand()%10+48;
                                pro+=num;
                            }
                        }
                        else
                        {
                            for(int j=0;j<a;j++)
                            {
                                char num=rand()%26+65;
                                pro+=num;
                            }
                        }
                        while(1)
                        {
                                chrono::seconds l(3);
                                auto start=chrono::steady_clock::now();
                                cout<<pro<<'\n';
                                cin>>ans;
                                if(pro==ans)
                                {   
                                    auto end=chrono::steady_clock::now();
                                    auto durat=chrono::duration_cast<std::chrono::seconds>(end-start);
                                    point+=a;
                                    cout<<setw(20)<<point<<'\n';
                                    if(durat.count()>5)
                                        return 0;
                                    break;
                                }
                                else
                                   point-=a*3;
                        }
                }
            }
        }
   }   
}
/*#include <iostream>
#include<locale>
#include<cstdlib>
#include<ctime>
using namespace std;
bool dou(wchar_t han)
{
    int k=han%28;
    return k==0;
}
int main()
{
    locale::global(locale(""));
    srand(time(0));
    for(int i=0;i<5;i++)
    {
        
        wchar_t hangul=0xAC00+rand()%11172;
        if(!dou(hangul))
              i--;
        else
              wcout<<hangul;
    }
}
*/
