#ifndef STANDARDWINDOWCLASS_H
#define STANDARDWINDOWCLASS_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QLabel>
#include <QPushButton>
#include <QStatusBar>

class StandardWindowClass : public QMainWindow
{
    Q_OBJECT
public:
    explicit StandardWindowClass(QWidget *parent = nullptr);

signals:

public slots:
    void launchLenghtConverterWindow();
    void launchNumberCalculatorWindow();
    void launchQuadraticSolverWindow();
    void launchColumbSolverWindow();
    void launchGravitationalSolverWindow();

    void launchSolverDialog();
    void launchConverterDialog();
    void launchCalculatorDialog();
    void launchAbout();
    void launchCredits();
    void launchHelp();

private:
    QLabel* pSolverInfo;
    QMenuBar* pMenuBar;
    QMenu* pSolvers;
    QMenu* pConverters;
    QMenu* pCalcultors;
    QMenu* pHelpMenu;

    QAction* pAQuadraticSolverWindow;
    QAction* pAGravitationalSolverWindow;
    QAction* pAColumbSolverWindow;
    QAction* pALenghtConverterWindow;
    QAction* pANumberCalculatorWindow;
    QAction* pAExit;
    QAction* pAAbout;
    QAction* pAHelp;
    QAction* pACredits;

    QPushButton* pLaunchConverter;
    QPushButton* pLaunchCalculator;
    QPushButton* pLaunchSolver;

    void createActions();
    void createMenus();
};

#endif // STANDARDWINDOWCLASS_H
