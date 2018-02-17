#include <iostream>
#include <map>
#include <string.h>
using namespace std;
int compare(string name1,string name2)
{
    if(strcmp(name1,name2)==0)
    return 0;
    else
    return 1;
}
int main() 
{
    string voice,temp;
    cout<<"WELCOME HOME...\n";
    map<string,string> home;
    home["halllight"]="On",home["hallfan"]="Off",home["bedroomlight"]="Off",home["bedroomfan"]="Off",home["kitchenlight"]="Off",home["washroomlight"]="Off",home["airconditioner"]="Off";
    scanf("%s",voice);
    map<string,string> :: iterator itr=home.begin();
        for(itr;itr!=home.end();itr++)
        {
            if(strcmp(itr->first,voice)==0)
            temp=itr->first;
        }
    switch(compare(temp,voice))
        {
            case 0:home[temp]="On";
            case 1:home[temp]="Off";
        }
    
    return 0;
}
