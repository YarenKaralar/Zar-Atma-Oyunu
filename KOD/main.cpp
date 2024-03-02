#include <iostream>
#include <iomanip>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{  srand(time(0));
    char z;
    int bil,kul,dnm=0;
    cout<<setw(17)<<"ZAR ATMA OYUNU\n";
    cout<<"Zar atmak icin 'Z' tusuna basın!:"; 
    cin>>z;
    
     while(z!='Z')
    {cout<<"Z tusuna basmalisiniz!\n";
      cin>>z;
    }
    
    bil=rand()%6+1;
    kul=rand()%6+1;
    
    if(bil==kul)
    dnm=0;
    
    while(bil!=kul)
    { cout<<"Attiginiz sayi "<<kul<<", maalesef dogru sayi degil.\n";
      cout<<"Tekrar denemek icin 'Z' tusuna basin!:";
      cin>>z; cout<<endl;
      while(z!='Z')
     { cout<<"Z tusuna basmalisiniz!\n";
       cin>>z;
     }
    kul=rand()%6+1;
    dnm++;
    }
    
    cout<<"Tebrikler! Ayni sayiyi tutturdunuz! (zar->"<<bil<<")"<<endl;
    cout<<dnm+1<<". denemede dogru sayiyi buldunuz!";
}
