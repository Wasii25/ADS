#include <iostream>
using namespace std;

int stringLength(char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

void stringCopy(const char *str, char *dest){
    int i=0;
    while(str[i] != '\0'){
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
}

void stringConcat(char *str, char *dest){
    int destLength = stringLength(dest);
    int i=0;
    while(str[i] != '\0'){
        dest[destLength + i] = str[i];
        i++;
    }
    dest[destLength + i] = '\0';
}

int stringCompare(char *str1, char *str2){
    int i=0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

int main(){
    char str1[100], str2[100], result[200];
    cout<<"Enter the first string: ";
    cin.getline(str1, 100);
    cout<<"Enter the second string: ";
    cin.getline(str2, 100);


    int s1 = stringLength(str1);
    int s2 = stringLength(str2);

    cout<<"Length of first string: "<<s1<<endl;
    cout<<"Length of second string: "<<s2<<endl;

    stringCopy(str1, result);
    cout<<"after copying first string to second: "<<result<<endl;

    stringConcat(str2, result);
    cout<<"after concating second string to first: "<<result<<endl;

    cout<<"Comparing string 1 and string 2: "<<stringCompare(str1, str2)<<endl;

    return 0;
}