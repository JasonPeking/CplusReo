#include "newspaper.h"
#include "ui_newspaper.h"

void Newspaper::sent(){
    emit newPaper(m_name);
}

Newspaper::~Newspaper()
{
    delete ui;
}
