#include "gravititionalcalculator.h"

gravititionalcalculator::gravititionalcalculator(QWidget* parent) :
        QDialog(parent)
{
    pLabel1 = new QLabel(tr("Mass of Object 1 : "));
    pLabel2 = new QLabel(tr("Mass of Object 2 : "));
    pLabel3 = new QLabel(tr("Distance between particles :"));
    pLabel4 = new QLabel(tr(""));

    pLineEdit1 = new QLineEdit();
    pLineEdit2 = new QLineEdit();
    pLineEdit3 = new QLineEdit();

    pLabel1 -> setBuddy(pLineEdit1);
    pLabel2 -> setBuddy(pLineEdit2);
    pLabel3 -> setBuddy(pLineEdit3);

    pComputeButton = new QPushButton(tr("Compute"));
    pCancelButton = new QPushButton(tr("Cancel"));

    QObject::connect(pComputeButton, SIGNAL(clicked()), this, SLOT(DoCompute()));
    QObject::connect(pCancelButton, SIGNAL(clicked()), this, SLOT(close()));

    QObject::connect(pLineEdit1, SIGNAL(textChanged(QString)), this, SLOT(TextChangedLabel1(QString)));
    QObject::connect(pLineEdit2, SIGNAL(textChanged(QString)), this, SLOT(TextChangedLabel2(QString)));
    QObject::connect(pLineEdit3, SIGNAL(textChanged(QString)), this, SLOT(TextChangedLabel3(QString)));

    pEntry1 = new QHBoxLayout;
    pEntry2 = new QHBoxLayout;
    pEntry3 = new QHBoxLayout;

    pRightLayout = new QVBoxLayout;
    pLeftLayout = new QVBoxLayout;

    pMainLayout = new QHBoxLayout;

    pEntry1 -> addWidget(pLabel1);
    pEntry1 -> addWidget(pLineEdit1);

    pEntry2 -> addWidget(pLabel2);
    pEntry2 -> addWidget(pLineEdit2);

    pEntry3 -> addWidget(pLabel3);
    pEntry3 -> addWidget(pLineEdit3);

    pLeftLayout -> addLayout(pEntry1);
    pLeftLayout -> addLayout(pEntry2);
    pLeftLayout -> addLayout(pEntry3);
    pLeftLayout -> addWidget(pLabel4);

    pRightLayout -> addWidget(pComputeButton);
    pRightLayout -> addWidget(pCancelButton);

    pMainLayout -> addLayout(pLeftLayout);
    pMainLayout -> addLayout(pRightLayout);

    setLayout(pMainLayout);
    setWindowTitle(tr("Gravititional Force Calculator"));
    setFixedHeight(sizeHint().height());
}

void gravititionalcalculator::TextChangedLabel1(const QString& str)
{
    m1 = str.toDouble();
}

void gravititionalcalculator::TextChangedLabel2(const QString& str)
{
    m2 = str.toDouble();
}

void gravititionalcalculator::TextChangedLabel3(const QString& str)
{
    r = str.toDouble();
}

void gravititionalcalculator::DoCompute()
{
    double k = 6.674;
    double force = k * m1 * m2 / (r * r);
    QString strForce;
    strForce.setNum(force, 'g', 12);
    strForce.append(tr(" x 10^-11 "));
    pLabel4 -> setText(strForce + "is the electrostatic force");
    pLabel4 -> setFrameStyle(QFrame::StyledPanel);
}

