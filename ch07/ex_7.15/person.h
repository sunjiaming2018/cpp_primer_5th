//
// Created by sun on 19-8-1.
//

#ifndef EX_7_15_PERSON_H
#define EX_7_15_PERSON_H


class person {
private:
    string strname;
    string straddress;
public:
    person()=default;
    person(const string &name, const string &add)
    {
        strname=name;
        straddress=add;
    }
    person(std::istream &is){is>>*this};
public:
    string getname() const { return strname};
    string getaddd() const { return straddress};
};


#endif //EX_7_15_PERSON_H
