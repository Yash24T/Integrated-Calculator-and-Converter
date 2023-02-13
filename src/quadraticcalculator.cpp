#include "quadraticcalculator.h"
#include <cmath>

quadraticcalculator::quadraticcalculator(QWidget* parent) :
    QDialog(parent)
{
    pLabel1 = new QLabel(tr("Value of a "));
    pLabel2 = new QLabel(tr("Value of b "));
    pLabel3 = new QLabel(tr("Value of c "));
    pLabel4 = new QLabel(tr("Quadratic Equation : ax^2 + bx + c = 0"));
    pLabel5 = new QLabel(tr(""));
    pLabel6 = new QLabel(tr(""));

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

    pLeftLayout -> addWidget(pLabel4);
    pLeftLayout -> addLayout(pEntry1);
    pLeftLayout -> addLayout(pEntry2);
    pLeftLayout -> addLayout(pEntry3);
    pLeftLayout -> addWidget(pLabel5);
    pLeftLayout -> addWidget(pLabel6);

    pRightLayout -> addWidget(pComputeButton);
    pRightLayout -> addWidget(pCancelButton);
    pRightLayout -> addStretch();

    pMainLayout -> addLayout(pLeftLayout);
    pMainLayout -> addLayout(pRightLayout);

    setLayout(pMainLayout);
    setWindowTitle(tr("Quadratic Root Calculator"));
    setFixedHeight(sizeHint().height());
}

void quadraticcalculator::TextChangedLabel1(const QString& str)
{
    a = str.toInt();
}

void quadraticcalculator::TextChangedLabel2(const QString& str)
{
    b = str.toInt();
}

void quadraticcalculator::TextChangedLabel3(const QString& str)
{
    c = str.toInt();
}

void quadraticcalculator::DoCompute()
{
    double descriminant = sqrt((b * b) - (4 * a * c));
    double root1 = (-b + descriminant) / (2 * a);
    double root2 = (-b - descriminant) / (2 * a);

    QString str1;
    QString str2;
    QString str3;

    str1 = QString("%L1 . x^2 + ")      .arg(a);
    str2 = QString("%L2 . x + ")        .arg(b);
    str3 = QString("%L3 is equation")   .arg(c);
    pLabel5 -> setText(str1 + str2 + str3);

    QString rootstr1;
    QString rootstr2;

    rootstr1.setNum(root1, 'g', 4);
    rootstr2.setNum(root2, 'g', 4);

    pLabel6 -> setText(rootstr1 + " and " + rootstr2 + " are roots of equation");
    pLabel6 -> setFrameStyle(QFrame::StyledPanel);
}

