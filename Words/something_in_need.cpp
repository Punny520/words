#include"something_in_need.h"

Global* Global::global=nullptr;
Global::Global()
{

}

Global *Global::getinstance()
{

    if(global==nullptr)
    {
        global = new Global();
    }

    return  global;
}

void Global::setUser_account(QString n)
{
    num_account=n;
}

QString Global::getUser_account()
{
    return num_account;
}

void Global::setTrain_kind(int n)
{
    num_train_kind=n;
}

int Global::getTrain_kind()
{
    return num_train_kind;
}

void Global::setWord_kind(int n)
{
    num_word_kind=n;
}

int Global::getWord_kind()
{
    return num_word_kind;
}
