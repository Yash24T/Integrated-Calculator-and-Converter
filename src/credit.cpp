#include "credit.h"

Credit::Credit(QWidget* parent) :
    QDialog(parent)
{
    pMadebyLabel = new QLabel("Made by : ");
    pMadebyLabel -> setAlignment(Qt::AlignCenter);
    pMyName = new QLabel("Yash Thakare");
    pMyName -> setAlignment(Qt::AlignCenter);
    pGuidancebyLabel = new QLabel("Guidance by : ");
    pGuidancebyLabel -> setAlignment(Qt::AlignCenter);
    pSirName = new QLabel("Yogeshwar Shukla Sir");
    pSirName -> setAlignment(Qt::AlignCenter);

    pLayout = new QVBoxLayout;
    pLayout -> addWidget(pMadebyLabel);
    pLayout -> addWidget(pMyName);
    pLayout -> addWidget(pGuidancebyLabel);
    pLayout -> addWidget(pSirName);

    setLayout(pLayout);
    setWindowTitle(tr("Credits"));
}
