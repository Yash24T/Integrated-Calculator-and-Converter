#include "standardwindowclass.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "columbcalculator.h"
#include "gravititionalcalculator.h"
#include "lengthconverter.h"
#include "numbercalculator.h"
#include "quadraticcalculator.h"
#include "solverstandarddialog.h"
#include "About.h"
#include "credit.h"
#include "help.h"

StandardWindowClass::StandardWindowClass(QWidget *parent)
    : QMainWindow{parent}
{
    QWidget* pCentralWidget = new QWidget;
    setCentralWidget(pCentralWidget);

    QWidget* pTopWidget = new QWidget;
    pTopWidget -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QWidget* pBottomWidget = new QWidget;
    pBottomWidget -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    pSolverInfo = new QLabel(tr("Click on Menu Options to launch solvers or click on buttons to lauch integrated window"));
    pSolverInfo -> setFrameStyle(QFrame::Panel);
    pSolverInfo -> setAlignment(Qt::AlignCenter);
    pSolverInfo -> setWordWrap(true);

    pLaunchSolver = new QPushButton(tr("Solvers"));
    pLaunchCalculator = new QPushButton(tr("Calcutors"));
    pLaunchConverter = new QPushButton(tr("Converters"));

    QObject::connect(pLaunchSolver, SIGNAL(clicked()), this, SLOT(launchSolverDialog()));
    QObject::connect(pLaunchCalculator, SIGNAL(clicked()), this, SLOT(launchCalculatorDialog()));
    QObject::connect(pLaunchConverter, SIGNAL(clicked()), this, SLOT(launchConverterDialog()));

    QVBoxLayout* pInfoWidgetLayout = new QVBoxLayout;
    pInfoWidgetLayout ->addWidget(pTopWidget);
    pInfoWidgetLayout ->addWidget(pSolverInfo);
    pInfoWidgetLayout ->addWidget(pBottomWidget);

    QVBoxLayout* pButtonWidgetLayout = new QVBoxLayout;
    pButtonWidgetLayout -> addWidget(pLaunchSolver);
    pButtonWidgetLayout -> addWidget(pLaunchCalculator);
    pButtonWidgetLayout -> addWidget(pLaunchConverter);

    QHBoxLayout* pCentralLayout = new QHBoxLayout;
    pCentralLayout -> addLayout(pButtonWidgetLayout);
    pCentralLayout -> addLayout(pInfoWidgetLayout);

    pCentralWidget -> setLayout(pCentralLayout);

    createActions();
    createMenus();

    QString msg = tr("Welcome to Solver Application");
    statusBar() -> showMessage(msg);

    setWindowTitle(tr("Solver Application"));
    setMinimumSize(400, 400);
    resize(600, 600);
}

void StandardWindowClass::createActions()
{
    pAQuadraticSolverWindow = new QAction(tr("Quadratic Solver"), this);
    pAQuadraticSolverWindow ->setShortcut(tr("Ctrl+Q"));
    pAQuadraticSolverWindow ->setStatusTip(tr("Launch a Quadratic Solver"));
    connect(pAQuadraticSolverWindow, SIGNAL(triggered()), this, SLOT(launchQuadraticSolverWindow()));

    pAColumbSolverWindow = new QAction(tr("Columb Solver"), this);
    pAColumbSolverWindow ->setShortcut(tr("Ctrl+C"));
    pAColumbSolverWindow ->setStatusTip(tr("Launch a Columb Solver"));
    connect(pAColumbSolverWindow, SIGNAL(triggered()), this, SLOT(launchColumbSolverWindow()));

    pAGravitationalSolverWindow = new QAction(tr("Gravitational Solver"), this);
    pAGravitationalSolverWindow ->setShortcut(tr("Ctrl+Q"));
    pAGravitationalSolverWindow ->setStatusTip(tr("Launch a Quadratic Solver"));
    connect(pAGravitationalSolverWindow, SIGNAL(triggered()), this, SLOT(launchGravitationalSolverWindow()));

    pALenghtConverterWindow = new QAction(tr("Lenght Converter"), this);
    pALenghtConverterWindow ->setShortcut(tr("Ctrl+L"));
    pALenghtConverterWindow ->setStatusTip(tr("Launch a Lenght Converter"));
    connect(pALenghtConverterWindow, SIGNAL(triggered()), this, SLOT(launchLenghtConverterWindow()));

    pANumberCalculatorWindow = new QAction(tr("Number Calculator"), this);
    pANumberCalculatorWindow ->setShortcut(tr("Ctrl+N"));
    pANumberCalculatorWindow ->setStatusTip(tr("Launch a NumberCalculator"));
    connect(pANumberCalculatorWindow, SIGNAL(triggered()), this, SLOT(launchNumberCalculatorWindow()));

    pAAbout = new QAction(tr("About"), this);
    pAAbout ->setShortcut(tr("Ctrl+A"));
    pAAbout ->setStatusTip(tr("Launch About"));
    connect(pAAbout, SIGNAL(triggered()), this, SLOT(launchAbout()));

    pAExit = new QAction(tr("Exit"), this);
    pAExit ->setShortcut(tr("Ctrl+Q"));
    pAExit ->setStatusTip(tr("Launch a Quadratic Solver"));
    connect(pAExit, SIGNAL(triggered()), this, SLOT(launchQuadraticSolverWindow()));

    pAHelp = new QAction(tr("Help"), this);
    pAHelp ->setShortcut(tr("Ctrl+H"));
    pAHelp ->setStatusTip(tr("Launch a Help"));
    connect(pAHelp, SIGNAL(triggered()), this, SLOT(launchHelp()));

    pACredits = new QAction(tr("Credits"), this);
    pACredits ->setShortcut(tr("Ctrl+R"));
    pACredits ->setStatusTip(tr("Launch a Credit"));
    connect(pACredits, SIGNAL(triggered()), this, SLOT(launchCredits()));
}

void StandardWindowClass::createMenus()
{
    pSolvers = menuBar() -> addMenu(tr("Solvers"));
    pSolvers -> addAction(pAQuadraticSolverWindow);
    pSolvers -> addAction(pAColumbSolverWindow);
    pSolvers -> addAction(pAGravitationalSolverWindow);

    pConverters = menuBar() -> addMenu(tr("Converters"));
    pConverters -> addAction(pALenghtConverterWindow);

    pCalcultors = menuBar() -> addMenu(tr("Calculators"));
    pCalcultors -> addAction(pANumberCalculatorWindow);

    pHelpMenu  = menuBar() -> addMenu(tr("Help Menu"));
    pHelpMenu -> addAction(pAAbout);
    pHelpMenu -> addAction(pAHelp);
    pHelpMenu -> addAction(pACredits);
    pHelpMenu -> addAction(pAExit);
}


void StandardWindowClass::launchLenghtConverterWindow()
{
    LengthConverter* dlg = new LengthConverter(this);
    dlg -> show();
}

void StandardWindowClass::launchNumberCalculatorWindow()
{
    NumberCalculator* dlg = new NumberCalculator(this);
    dlg -> show();
}

void StandardWindowClass::launchQuadraticSolverWindow()
{
    quadraticcalculator*  dlg = new quadraticcalculator(this);
    dlg -> show();
}

void StandardWindowClass::launchColumbSolverWindow()
{
    columbcalculator*  dlg = new columbcalculator(this);
    dlg -> show();
}

void StandardWindowClass::launchGravitationalSolverWindow()
{
    gravititionalcalculator* dlg = new gravititionalcalculator(this);
    dlg -> show();
}


void StandardWindowClass::launchSolverDialog()
{
    SolverStandardDialog* dlg = new SolverStandardDialog(this);
    dlg -> show();
}

void StandardWindowClass::launchConverterDialog()
{
    LengthConverter* dlg = new LengthConverter(this);
    dlg -> show();
}

void StandardWindowClass::launchCalculatorDialog()
{
    NumberCalculator* dlg = new NumberCalculator(this);
    dlg -> show();
}

void StandardWindowClass::launchAbout()
{
    About* dlg = new About(this);
    dlg -> show();
}

void StandardWindowClass::launchCredits()
{
    Credit* dlg = new Credit(this);
    dlg -> show();
}

void StandardWindowClass::launchHelp()
{
    Help* dlg = new Help(this);
    dlg -> show();
}



