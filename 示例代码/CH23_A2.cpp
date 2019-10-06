#include<stdio.h>
#include<string.h>
class Tutorial{
public:
    char name[32];
    char author[16];
public:
    void ShowInfo(){
        printf("Tutorial:%s,%s \n",name,author);
    }
};
class VideoTutorial:public Tutorial{
public:
    void play(){
        printf("Playing...abc=%d \n",visits);
    }
public:
    char url[128];
    int visits;
};
int main(){
    VideoTutorial  cpp_guide;
    strcpy(cpp_guide.name,"c/c++学习开发指南");
    strcpy(cpp_guide.author,"邵发");
    cpp_guide.ShowInfo();

    strcpy(cpp_guide.url,"www.baidu.com");
    cpp_guide.visits=10;
    return 0;
}





