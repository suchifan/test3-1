//
//  main.cpp
//  test3-1
//
//  Created by suchao on 6/11/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <cstring>


using namespace std;

int judge(char s1[], char s2[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input 2 strings:" << endl;
    
    char s1[100];
    char s2[50];
    cin >> s1 >> s2;
    
    cout << judge(s1, s2);
    
    return 0;
}


int judge(char s1[], char s2[]){
    int l1 = (int)strlen(s1);
    int l2 = (int)strlen(s2);
    
    int i = 0;
    
    for(i=0; i<l1-l2+1; i++){
        if(!strncmp(s1+i, s2, l2)){
            break;
        }
    }
    if(i == l1-l2+1){
        return -1;
    }else{
        return i;
    }

}
