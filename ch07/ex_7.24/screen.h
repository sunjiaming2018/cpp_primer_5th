//
// Created by sun on 2019/8/12.
//

#ifndef EX_7_24_SCREEN_H
#define EX_7_24_SCREEN_H


class screen {
private:unsigned height=0,wight=0;
    unsigned cursor=0;
    string contents;
public:
    screen()= default;
    screen(unsigned ht, unsigned wd) : height(ht),wight(wd),
    contents(ht*wd,''){};
    screen(unsigned ht, unsigned wd,char c):height(ht),wight(wd),
    contents(ht*wd,c){};

};


#endif //EX_7_24_SCREEN_H
