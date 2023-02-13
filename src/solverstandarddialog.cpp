#include "solverstandarddialog.h"
#include "qpushbutton.h"

SolverStandardDialog::SolverStandardDialog(QWidget *parent)
    : QDialog{parent}
{
    pQuadraticButton = new QPushButton(tr("Quadratic Solver"));
    pColumbButton = new QPushButton(tr("Columb Solver"));
    pGravitionalButton = new QPushButton(tr("Gravitational Solver"));
    pCancelButton = new QPushButton(tr("Close"));
    pAboutButton = new QPushButton(tr("About"));
    pOpenallButton = new QPushButton(tr("Open All"));

    QObject::connect(pQuadraticButton, SIGNAL(clicked()), this, SLOT(quadraticButton()));
    QObject::connect(pColumbButton, SIGNAL(clicked()), this, SLOT(columbButton()));
    QObject::connect(pGravitionalButton, SIGNAL(clicked()), this, SLOT(gravitionalButton()));
    QObject::connect(pCancelButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(pAboutButton, SIGNAL(clicked()), this, SLOT(aboutButton()));
    QObject::connect(pOpenallButton, SIGNAL(clicked()), this, SLOT(openallButton()));

    pTitleLabel = new QLabel(tr("Equation Solver and Quantity Calculator"));
    pTitleLabel ->setAlignment(Qt::AlignCenter);
    pTitleLabel ->setFrameStyle(QFrame::WinPanel);

    pAboutLabel = new QLabel(tr("Click on option above."));
    pAboutLabel ->setAlignment(Qt::AlignCenter);
    pAboutLabel ->setFrameStyle(QFrame::WinPanel);

    pButtonSet1 = new QHBoxLayout;
    pButtonSet1 -> addWidget(pQuadraticButton);
    pButtonSet1 -> addWidget(pColumbButton);
    pButtonSet1 -> addWidget(pGravitionalButton);

    pButtonSet2 = new QHBoxLayout;
    pButtonSet2 -> addWidget(pAboutButton);
    pButtonSet2 -> addWidget(pOpenallButton);
    pButtonSet2 -> addWidget(pCancelButton);

    pButtonLayout = new QVBoxLayout;
    pButtonLayout -> addLayout(pButtonSet1);
    pButtonLayout -> addLayout(pButtonSet2);

    MainLayout = new QVBoxLayout;
    MainLayout -> addWidget(pTitleLabel);
    MainLayout -> addSpacing(20);
    MainLayout -> addLayout(pButtonLayout);
    MainLayout -> addSpacing(20);
    MainLayout -> addWidget(pAboutLabel);

    pQuadraticDialog = new quadraticcalculator;
    pColumbDialog = new columbcalculator;
    pGravityDialog = new gravititionalcalculator;


    setLayout(MainLayout);
    setWindowTitle(tr("Solver and Calculator"));
}

void SolverStandardDialog::quadraticButton()
{
    pAboutLabel -> setText(tr("Click on option above."));
    pQuadraticDialog -> show();
}

void SolverStandardDialog::columbButton()
{
    pAboutLabel -> setText(tr("Click on option above."));
    pColumbDialog -> show();
}

void SolverStandardDialog::gravitionalButton()
{
    pAboutLabel -> setText(tr("Click on option above."));
    pGravityDialog -> show();
}


void SolverStandardDialog::aboutButton()
{
    pAboutLabel -> setText(tr("Calculator and Solver Application by Yash Thakare"));
}

void SolverStandardDialog::openallButton()
{
    pAboutLabel -> setText(tr("Click on option above."));
    pQuadraticDialog -> show();
    pColumbDialog -> show();
    pGravityDialog -> show();
}
