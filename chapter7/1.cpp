#include <iostream>
char path[10];
char arr[3]={'A','B','C'};

void aespa(int);

int main()
{
    aespa(0);

    return 0;
}
void aespa(int level){

    if(level==2){
        std::cout<<path<<std::endl;
        return;
    }

    for(size_t i =0; i<3; i++){
        path[level]=arr[i];
        aespa(level+1);
        path[level]='0';
    }
}