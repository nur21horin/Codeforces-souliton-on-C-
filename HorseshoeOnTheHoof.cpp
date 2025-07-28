#include <iostream>
#include   <set>
using  namespace std;
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    // if(s1==s2||s1==s3||s1==s4||s2==s3||s2==s4||s3==s4){
    //     cout<<1<<endl;
    // }else if((s1==s2 && s1==s3)|| ( s2==s3 && s2==s4)||s3==s4){
    //     cout<<2<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    // }else if(s1==s2 && s1==s3 && s1==s4 &&  s2==s3 && s2==s4 && s3==s4){
    //     cout<<3<<endl;
    // }
    // else{
    //     cout<<4<<endl;
    // }
    set<int> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);
    int uniquColor=colors.size();
    cout<<4-uniquColor<<endl;
    return 0;
}