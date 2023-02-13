#include "help.h"

Help::Help(QWidget* parent) :
    QDialog(parent)
{
    pLabel1 = new QLabel("Click on menu bar to launch followinf windows : ");
    pLabel1 -> setAlignment(Qt::AlignCenter);
    pLabel2 = new QLabel("1. Solver");
    pLabel2 -> setAlignment(Qt::AlignCenter);
    pLabel3 = new QLabel("2. Calculator");
    pLabel3 -> setAlignment(Qt::AlignCenter);
    pLabel4 = new QLabel("3. Converter");
    pLabel4 -> setAlignment(Qt::AlignCenter);

    pLayout = new QVBoxLayout;
    pLayout -> addWidget(pLabel1);
    pLayout -> addWidget(pLabel2);
    pLayout -> addWidget(pLabel3);
    pLayout -> addWidget(pLabel4);

    setLayout(pLayout);
    setWindowTitle(tr("Credits"));
}
