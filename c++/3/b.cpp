#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class CompareString {
    public:
        char str[25];
        CompareString(char str1[]){
            strcpy(this->str,str1);
        }

        int operator==(CompareString s2){
            if(strcmp(str, s2.str) == 0){
                return 1;
            }
            else{
                return 0;
            }
        }

        int operator<=(CompareString s2){
            if(strlen(str) <= strlen(s2.str)){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        int operator>=(CompareString s2){
            if(strlen(str) >= strlen(s2.str)){
                return 1;
            }
            else{
                return 0;
            }
        }
};

void compare(CompareString s1, CompareString s2){
    if(s1 == s2){
        cout<<"s1 is equal to s2"<<endl;
    }
    else if(s1>=s2){ 
        cout<<"s1 is greater than s2"<<endl;
    }
    else{
        cout<<"s2 is greater than s1"<<endl;
    }
}

void test1(){
    char str1[] = "Geeks";
    char str2[] = "Geeks";
    CompareString s1(str1);
    CompareString s2(str2);

    compare(s1, s2);
}

int main(){
    test1();
    return 0;
}